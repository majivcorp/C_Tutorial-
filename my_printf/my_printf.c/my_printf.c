#include <stdio.h>
#include <stdarg.h>
#include <elf.h>

/*
#define HEXA_MIN "0123456789abcdef"  // has no global variables are allowed, we will comment it out, see line 188.
#define HEXA_CAP "0123456789ABCDEF"
*/
// a function that that prints a single character 
void put_char(char c){
    write(1, &c,1);
}
// string function count 
int my_strlen(char* str){
    int len =0;

    while(*str){
        len += 1;
        str +=1;
    }

    return len;
}
// a function that prints a string 
void put_str(char *str){
    int len = my_strlen(str);

    write(1, str,len);
}
// a function that  converts number to string function
void my_put_nbr(int nbr){
    int beg;
    int end;

    end = nbr % 10;
    beg = (nbr - end)/10;
    if(beg)
        my_put_nbr(beg);
    put_char('0' + end);
}
// a function that converts unsigned int to a Hexadecimal number, which then prints the converstion into a to string 
void my_puthexa(unsigned int nbr, char *base)
{
    unsigned int beg;
    unsigned int end;

    end = nbr % 16;
    beg = (nbr - end)/ 16;
    if(beg)
        my_puthexa(beg, base);
    put_char(base[end]);

}

void my_putunbr(uint32_t nbr){
    uint32_t diviz;

    if((int)nbr == -1)
        put_str("4294967295");
    else{
        diviz =1;
        while((diviz*10) < nbr)
            diviz *=10;
        while(diviz){
            put_char((char)((int)'0' + (int)(nbr/diviz)));
            nbr -= ((nbr / diviz) * diviz);
            diviz /= 10;
        }
    }
}

//state:
// 0; REGULAR
// 1: ESCAPE
/*
void vmy_printf(const char *fmt, va_list args){
    int state = 0;

    while (*fmt){
        if (state == 0){
            if(*fmt =='%'){
                state = 1;
            }else{
                put_char(*fmt);
            }
        } else if(state ==1){
            switch(*fmt)
            {
            case 'c':
                put_char((char)va_arg(args, int));
              
                break;
            case 's':
                put_str(va_arg(args, char*));
          
                break;
            case 'd':
                my_put_nbr(va_arg(args, int));
                break;
            case 'x' || 'X':
                my_puthexa(va_arg(args, unsigned int), (*(fmt + 1) == 'x' ? "0123456789abcdef": "0123456789ABCDEF"));
                break;
            case 'p':
                put_char('0');
                put_char('x');
                break;
            case 'u':
                my_putunbr(va_arg(args, unsigned int));
                break;

            }
            state = 0;
        }
        fmt++;
    }
}

void my_printf(const char *fmt, ...){
     va_list args;         //va_list : type to hold the information about the variable arguments
     va_start(args, fmt);  //va_start Intialise the variable argument list name given - //va_arg retrieve next argument

     
     vmy_printf(fmt, args);
     
          
     va_end(args);          // end the argument list

     
}*/ // failed iteration above commented out


void unsigned_number_to_string(uint64_t number, int base, char *buffer){
    if (number == 0) {
        *buffer++ = '0';
        *buffer = 0;
        return;
    }

    char buf[65];
    for(int i = 0; i < 65; i++)
        buf[i] = 0;

    int cur = 0;

    while(number){
        int digit = number % base;
        if (digit >=10){
            buf[cur++] = 'a' + (digit - 10);
        }else {
            buf[cur++] = '0' + digit;
        }

        number /= base;
    }

    for (int i = cur - 1; i != 0; i--)
        *buffer++ = buf[i];
    *buffer = buf[0];
    *buffer = 0;
    
}

void number_to_string(int64_t number, int base, char *buffer) {
    if (number < 0){
        *buffer++ = '-';
        number = -number;
        unsigned_number_to_string(number, base, buffer);
    }
}
void my_printf(char *fmt, ...)
{
  va_list args;
  int i;

  va_start(args, fmt);
  i = 0;
  while (*fmt)
    {
      if (*fmt == '%')
        {
          if (*(fmt + 1) == 's')
            put_str(va_arg(args, char *));
          else if (*(fmt + 1) == 'd' || *(fmt + 1) == 'i')
            my_put_nbr(va_arg(args, int));
          else if (*(fmt + 1) == 'c')
            put_char((char)va_arg(args, int));
          else if (*(fmt + 1) == 'x' || *(fmt + 1) == 'X')
            my_puthexa(va_arg(args, unsigned int), (*(fmt + 1) == 'x' ? "0123456789abcdef" : "0123456789ABCDEF"));
            /*my_puthexa(va_arg(args, unsigned int), (*(fmt + 1) == 'x' ? "0123456789abcdef" : "0123456789ABCDEF"));*/
          else if (*(fmt + 1) == 'u')
            my_putunbr(va_arg(args, unsigned int));
          else if (*(fmt + 1) == 'p'){
              put_char('0');
              put_char('x'); 

              void *n = va_arg(args, void *);
              char buf[32];
              unsigned_number_to_string((uint64_t) n, 16, buf);
              for(int i =0; buf[i]; i++){
                  put_char(buf[i]);
              }
          }

          else
            put_char(*(fmt + 1));
          fmt++;
        }  
      else
        put_char(*fmt);
      fmt++;
    }
  va_end(args);
}

int main(void)
{
  my_printf("%s %d  %c %x %X %u test\n", "test", 1, 'e', 42, 42, 12887238732);
  my_printf("%c%c%c%c%c!\n", 'H', 'e', 'l', 'l', 'o');
  my_printf("%d!\n", 1337);
  my_printf("%c!\n", 'H');
  return (0);
}


//material sourced from https://www.youtube.com/watch?v=89GryDno_IE
//material sourced from https://www.youtube.com/watch?v=-dZpDPFp6YU
//material sourced from https://www.includehelp.com/c/working-with-hexadecimal-values-in-c-programming-language.aspx#:~:text=%20Representation%20of%20Hexadecimal%20numbers%20in%20C%20programming,following%20example%2C%20where%20integer%20array%20is...%20More%20