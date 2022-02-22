#include <stdio.h>


void  my_print_alphabet(void) {
    char letter;

    letter = 'a';
    while (letter <= 'z'){
        putchar(letter);
        letter++;
    }
    putchar('\n');
}

/*int main(void)
{
    my_print_alphabet();
    return 0;
}*/




//For loop variation
/*
void  my_print_alphabet(void) {
    char letter;

    // Get the character to be written
    letter = 'a';
    //write the character to stdout(standard output)
    for (letter ='a'; letter <= 'z'; letter++) {
        putchar(letter);
        
    }
    putchar('\n');
}
*/

//material sourced from https://www.geeksforgeeks.org/putchar-function-in-c/
//Material sourced from https://stackoverflow.com/questions/51426227/displaying-characters-in-ascending-order-in-c

