#include <stdio.h>


                                              //param_1  = destination or dst parameter , 
char* my_strcpy(char* param_1, char* param_2) //while param_2 = source or src parameter  - in which the string variable is taken into the  destination parameter.
{   // take a pointer pointing to the beginning of dest string parameter.                                    
    char *start = param_1;
    //we have while loop, the while loops copies character from source to destination one by one.
    while(*param_2 != '\0')   //Copying stops when source points to the address of the null character ('\0').
                             //As we want to avoid the scenario where the source memory is be NULL.           
    {   
        //Here we assign the source address to the destination parameter
        *param_1 = *param_2;   //*destination = *source
        param_1++;             //Here we increment the destination parameter
        param_2++;             //Here we increment the source parameter
    }
    //At this point string pointed to by start parameter contains all characters of the source except null character
    *param_1 = '\0';           //The statement in line 18, appends a null character ('\0') to the string.          
    return start;              //the return statement returns the character pointer to the calling function.

}

//Material sourced from https://overiq.com/c-programming-101/the-strcpy-function-in-c/