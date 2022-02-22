#include <stdio.h>
#include <stdlib.h>
#define SIZE 260


//1. The main function takes in a command line argument.
int main(int ac, char **av) {
 
     int new_par[SIZE] = {0};
    //2. The for loop iterates through the command line arguments.
     for(int i=1; i<ac; i++){
         int a = 0;

        //3. The while loop iterates through each character in the command line argument.
         while (av[i][a] != '\0') {

            //4. If the character is not a double quote, 
            //then it increments the value of the character in the new_par array. 
             if (av[i][a] != '"') {
                 new_par[(int)av[i][a]] += 1;
             }
             a += 1;
         }
     }
 
     //5. The for loop iterates through the new_par array and prints out the character and its value.
     for(int b=0; b<SIZE; b++){
         if (new_par[b] > 0) {
             printf("%c:%d\n", b, new_par[b]);
         }
     }
 
     return 0;
 }


 //The following are failed iterations
 /*
void fill_array(int* array, char* str){
    int index =0;

    while(str[index] !='\0'){
        if(str[index] != '"'){
            array[(int)str[index]] +=1;
        }

        index +=1;
    }
        
}

void print_array(int* array, int size_array){
    int index = 0;

    while(index < size_array){
        if(array[index] > 0) {
            printf("%c:%d\n", index, array[index]);
        }
        
        index +=1;
    }
}

  

int main(int ac, char **av) {
    int index = 1;
    int array[SIZE] = {0};

    while(index < ac){
        fill_array(&array[0], av[index]);
        index += 1;
    }
    print_array(&array[0], SIZE);


  return EXIT_SUCCESS;
}
*/
