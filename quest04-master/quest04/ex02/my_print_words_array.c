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

//The function my_strlen() returns the length of a string.
int my_strlen(char* str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}

//2. The function my_putstr() prints a string to the standard output.
void my_putstr(char* str)
{
	write(1, str, my_strlen(str));
}
//3. The function my_print_words_array() prints all the strings in the array.
void my_print_words_array(string_array* param_1)
{
    int n = param_1 -> size;
    //It then loops through the array and prints each string.
    for(int  i= 0; i < n; i++) {
        my_putstr(param_1 -> array[i]);
        my_putstr("\n");
    }
    //The function returns nothing.
}

/*
int main()
{
    my_print_words_array(&);
}*/
//Material sourced from https://www.tutorialspoint.com/cprogramming/c_structures.htm
//info: <https://stackoverflow.com/questions/20347170/char-array-and-char-array> 