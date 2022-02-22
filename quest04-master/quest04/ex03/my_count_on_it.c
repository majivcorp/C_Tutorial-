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

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

//The function takes a string array as a parameter.
integer_array* my_count_on_it(string_array* param_1)
{
    int n =param_1 -> size;
    
    //2. It allocates memory for an integer array of the same size as the string array.
    integer_array* array = (integer_array*) malloc(sizeof(integer_array));

    array -> size = n;
    array -> array = (int*) malloc(n*sizeof(int));
    
    // integer_array* array = (integer_array*) malloc(n*sizeof(integer_array));

    //3. It iterates over the string array and counts the number of characters in each string.
    for(int i=0; i < n; i++) {
    //4. It stores the number of characters in each string in the integer array.
        array -> array[i] = strlen(param_1 ->array[i]);
    }
    //5. It returns the integer array.
    return array;

}