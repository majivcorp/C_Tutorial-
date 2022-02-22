#include <stdio.h>
#include <string.h>                    //We include string.h library in order to use the in built function 'strlen' , in the second varaition of our reverse_string code

/*
char* reverse_string(char* param_1)
{    //Declaration of variables i, len and temp
    int i, len = 0;
    char temp;

    //find number of characters in the string
    while (param_1[len]) {
        ++len;
    }
    for (i = 0; i < len / 2; ++i) {
        temp = param_1[i];
        param_1[i] = param_1[len - i - 1];
        param_1[len - i - 1] = temp;
    }
    return param_1;

}
*/

//Material sourced from https://dyclassroom.com/c/c-string-manipulation#:~:text=%20C%20-%20String%20Manipulation%20%201%20Printing,to%20concatenate%20two%20strings.%20In%20the...%20More%20
//Material sourced from https://www.chegg.com/homework-help/questions-and-answers/write-function-reverse-takes-string-argument-reverses-string-returns-reversed-string-note--q47823443
//Material sourced from https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/



/* A Variation of the above code*/





char* reverse_string(char* param_1)
{   //Declaration of variables i, len and temp
    int i, len, mid;
    char temp;
    
    //find number of characters
    len = strlen(param_1);            /* in this instance we use the in built function 'strlen' rather than the while loop from the above code => while (param_1[len]) {len++;}*/
    mid = len/2;    //condition in which the for loop will transverses the string characters.
    
    //To reverse a string all we have to do is swap the last character with the first character,
    for (i = 0; i < mid; i++) {      //the second last character with the second character and so on till we reach the middle of the string.
        // Swap character starting from two corners 
        temp = param_1[i];   // each original character is stored in the temporary variable       
        // characters are swapped based on it's index position
        param_1[i] = param_1[len - i - 1];   // index -1 is assigned to it's poar opposites initial poisition
        param_1[len - i - 1] = temp;    //original character is assigned to the end of it's index polar opposite's(index -1) poisition
    }
    return param_1;

}

