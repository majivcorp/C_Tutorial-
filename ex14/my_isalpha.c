#include <stdio.h>
//isalpha implementation C
int my_isalpha(char c) {

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                      "abcdefghijklmnopqrstuvwxyz";
    char *letter = alphabet;

    while(*letter != '\0' && *letter != c)
        

    if (*letter)
        return 1;

    return 0;
}

//Or ASCII
// check out https://en.wikipedia.org/wiki/ASCII
// under Printable characters

/*int my_isalpha(char c){
    if (c >= 65 && c <= 90 ||c >= 97 && c <= 122){
        return 1;
    }
    else{
        return 0;
    }

}*/



//Learning Material sourced from https://stackoverflow.com/questions/40248520/isalpha-implementation-c