#include <stdio.h>
#include <string.h>


/*Iterative Implementation*/

/*
// returns true if `param_1` and `param_2` are the same
int compare( char *param_1,  char *param_2)
{
    while (*param_1 && *param_2)
    {
        if (*param_1 != *param_2) {
            return 0;
        }
 
        param_1++;
        param_2++;
    }
 
    return (*param_2 == '\0');
}

// Function to implement `strstr()` function
char* my_strchr(char* param_1, char param_2)
{
    while (*param_1 != '\0')
    {
        if ((*param_1 == *param_2) && compare(param_1, param_2)) {
            return param_1;
        }
        param_1++;
    }
 
    return NULL;
}//Iteration failed
*/

/*Recursive Implementation*/
/*
// Recursive function to implement `strstr()` function
char* my_strchr(char* param_1, char param_2)
{
    if (*param_1 == '\0') {
        return param_1;
    }
 
    for (int i = 0; i < strlen(param_1); i++)
    {
        if (*(param_1 + i) == *param_2)
        {
            char* ptr = my_strchr(param_1 + i + 1, param_2 + 1);
            return (ptr) ? ptr - 1 : NULL;
        }
    }
 
    return NULL;
}//Iteration failed
*/

/*
 char *my_strchr(const char *s, int c) {
    if (s == NULL) {
        return NULL;
    }
    if ((c > 255) || (c < 0)) {
        return NULL;
    }
    int s_len;
    int i;
    s_len = strlen(s);
    for (i = 0; i < s_len; i++) {
        if ((char) c == s[i]) {
            return (const char*) &s[i];
        }
    }
    return NULL;
}  //Iteration failed
*/

char *my_strchr( char *s, int c)
{
   while(*s != c && *s != '\0') {
      s++;
   }
   if(*s == c) {
      return s;
   }else {
      return NULL;
   }
}

//Material sourced from https://www.techiedelight.com/implement-strstr-function-c-iterative-recursive/#:~:text=The%20strstr%20%28%29%20function%20returns%20a%20pointer%20to,pointer%20if%20Y%20is%20not%20part%20of%20X.
//Material sourced from https://stackoverflow.com/questions/14367727/how-does-strchr-implementation-work
//Material sourced from https://www.harishnote.com/2016/06/c-programming-78-strchr-implementation.html
//MAterial sourced from https://aticleworld.com/strchr-function-c-applications/