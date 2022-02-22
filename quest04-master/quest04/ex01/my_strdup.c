#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//for loop iteration of my_strdup function prototype
char* my_strdup(char* param_1)
{
    //It’s a type which is used to represent the size of objects in bytes 
    size_t len = strlen(param_1);        //and is therefore used as the return type by the sizeof operator.
    char * result = malloc(len+1);   //The function allocates a new string of the same length as the input string
    
    //and copies the input string into the new string
    for(size_t index = 0; index <+ len; index++){
        result[index] = param_1[index];      
    }
    return result; //The function returns a pointer to the new string.
    //cpy_array[len+1] ={0};

}
//we comment out the int main call function below
/*int main()
{
    char source[] = "GeeksForGeekss";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = my_strdup(source);
 
    printf("%s", target);
    return 0;
}
*/

// Material sourced from https://www.geeksforgeeks.org/size_t-data-type-c-language/
// Material sourced from https://stackoverflow.com/questions/18872899/understanding-the-strdup-function