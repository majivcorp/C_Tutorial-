#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* param_1, char* param_2)
{
    int n = param_1 -> size;
    int l = strlen(param_2);
    int f = 0;
    int x = 0;

    //1. First, it calculates the total size of the new string by iterating through 
    //the array of strings and adding up their lengths.
    for(int i = 0; i < n; i++){
        f += strlen(param_1->array[i]);
    }
    //2. Then, it allocates a new string of that size.
    char* p = (char *)malloc(f+(n-1)*l);

    //3. Then, it iterates through the array of strings again, 
    //copying each string into the new string.

    for(int i=0; i < n-1; i++) {
        //i = row, j = col, with array[row][col] in the two dimensional string array
        //ex. array = ["abc", "def", "gh", "!"]. each string in the array is a row, 
        //e.g  0 = "abc", 1 = "def" with [0][0] = 'a', [0][1] ='b',   [1][0] = 'd', [1][1] ='e' ..etc
        for(int j=0; j<strlen(param_1->array[i]); j++) {
            p[x] = param_1->array[i][j];
            x++;
        }

                   
            for(int k = 0; k < strlen(param_2); k++) {
                p[x] = param_2[k];
                x++;
            }
        
    }
   // printf(param_1->array[n-1]);
    p[x] = param_1->array[n-1][0];

    //4. Finally, it returns the new string.
    return p;

}