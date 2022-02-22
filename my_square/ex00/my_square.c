#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int my_square(int columns, int rows) 
{
    int i;
    int j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++){
            if (i == 0|| i == rows - 1){
                if (j > 0 && j < columns -1){
                    printf("-");
                    continue;
                }
                printf("o");
                
            }
            else if (j==0||j== columns - 1){
                printf("|");
            }
            else {
                printf(" ");
            }
        }
        printf("\n"); 
    }
}


int main(int ac, char**av) 
{
    if (ac!=3) {
        return 0;
    }
    int x = atoi(av[1]);
    int y = atoi(av[2]);
    
    my_square(x, y);
}