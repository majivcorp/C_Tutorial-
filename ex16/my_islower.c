#include <stdio.h>
//islower implementation C

// check out https://en.wikipedia.org/wiki/ASCII
// under Printable characters
int my_islower(char c){
    if (c >= 97 && c <= 122){
        return 1;
    }
    else{
        return 0;
    }

}

//or a varation of my original program from my isaplha excercise using an array
//STILL A WORK IN PROGRESS
/*int my_islower(char c) {

    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char *letter = alphabet;

    while(*letter != '\0' && *letter != c){
        
        if (*letter) {
            return 1;
        }
        else  {
            return 0;
        } 

    }


      
}*/


