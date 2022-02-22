#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# define LEN  1000

//1. The function takes two integers as input parameters.
int* my_range(int param_1, int param_2)
{

    int num_temp;   // declaration of temp variable to store our counts in our for loop below
    int index = 0;  // declaration of index positional variable used in the for loop bwlow 
    int count;
    int limit = param_2-1;             //the index count limit of all values below the max, the integer array should contain. 
    //Excluding the max 

    //Min included - max excluded.
    int diff = (param_2 - param_1) -1; //range between the inputed numbers
    
    //2. The function allocates memory for an integer array of size LEN + 1.
    int *result = (int*)malloc((LEN + 1));
    int range;

    if (param_1>param_2){
        int *ptr=NULL;
    }

    //3. The function initializes the array with the values of the input parameters.
    if (param_2>param_1){
        for(num_temp = param_1; num_temp <= limit; num_temp++){
            for(index = 0; index <= diff; index++){        
                result[index] = num_temp;
                num_temp = num_temp + 1;
                //printf("%d\t ", result[index]); 
            }
            return result;
            //4. The function returns the array.
        }
        return 0;
    }


/*
    if(param_2>param_1){
        for(size_t index = 0; index <+ len; index++){
        result[index] = param_1[index];      
        }
        return result;
    }*/
    /*
    if (param_2>param_1){
        for(num = param_1; num < limit; num++){
            for(count = 1; count <= (num-1); count++){
                result[index] = param_1;
                index++;
            }
            return result;
        
        }
        //printf("%d/t",result);
    }*/

/*    for(num = param_1; num < param_2; num++){
        for(count = 1; count <= (num-1); count++){
            result[index] = num;
            index++;
        }
        return result;
        
    }*/
    

}

/*
int main()
{
    my_range(10, 60);

    

    return 0;
}
*/

//Material Sourced from https://www.youtube.com/watch?v=-yN6KsA8d-k
//Material Sourced from https://www.youtube.com/watch?v=r1kVO45iaLw