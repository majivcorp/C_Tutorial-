#include <stdio.h>

//param_1  = destination or dst parameter , 
//while param_2 = source or src parameter  - in which the string variable is taken into the  destination parameter.
//param_3 is the maximumn of characters of a c string that is copied;  number of bytes that we want to copy from the array pointed to by “src” to the array pointed to by “dest” parameters.
char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    // return if dest and src is NULL
    //As we want to avoid the scenario where the source memory is be NULL.
    if ((param_1 == NULL) &&(param_2 == NULL))  // In our previous my_strcmp function, the while loop handled this scenario.
        return NULL;

    // take a pointer pointing to the beginning of dest string
    char *start = param_1;

    // copy first n characters of C-string pointed by src parameter
    // into the array pointed by dest parameter
    while (*param_2 && param_3--)         //Copying stops when source points to the address of the null character (‘\0’) or n parameter becomes 0.
    {
        *param_1 = *param_2;        //we have a while loop, the while loops copy character from source to destination one by one 
        param_1++;                 //and incrementing the destination 
        param_2++;                 //and source  pointer by 1.
    }
    // null terminate dest string parameter, thus it is 
    *param_1 = '\0'; //appends a null character ('\0') to the dest string. 
    return start;    ////the return statement returns the character pointer to the calling function.

}

//material sourced from https://upskill.us.qwasar.io/tracks/bootcamp-c-arc-01/projects/quest03