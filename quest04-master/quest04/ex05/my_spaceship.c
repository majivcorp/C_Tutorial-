#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1. The function takes a string as input.
char* my_spaceship(char* param_1)
{
    //char result[100];

    //2. It initializes two variables x and y to 0.
    int x = 0;
    int y = 0;
    //char *s_ptr = result;
    int string_length = strlen(param_1);
    
    char *direction = "up";    //3. It initializes a string direction to “up”.
    //4. It loops through the string and checks for the following:
    for(int index = 0; index<string_length; index++) {
        //a. If the character is ‘A’, it checks the direction and updates x or y accordingly.
        if(param_1[index] == 'A') {
            if(direction == "up") {
                y--;
            }
            else if(direction == "down") {
                y++;
            }
            else if(direction == "left") {
                x--;
            }
            else if(direction == "right") {
                x++;
            }
        }//b. If the character is ‘R’, it updates the direction.
        else if(param_1[index] == 'R') {
            if (direction == "up") {
                direction = "right";
            }
            else if(direction == "down") {
                direction = "left";
            }
            else if(direction == "left") {
                direction = "up";
            }
            else if(direction =="right") {
                direction = "down";
            }
        }//c. If the character is ‘L’, it updates the direction.
        else if(param_1[index] == 'L') {
            if(direction == "up") {
                direction = "left";
            }
            else if(direction == "down") {
                direction = "right";
            }
            else if(direction == "left") {
                direction = "down";
            }
            else if(direction == "right") {
                direction = "up";
            }
        }
        
    }
    //5. It returns a string with the final position of the spaceship.
    char* pos = (char*)malloc(8*sizeof(char*)); 
    sprintf ( pos, "{x: %d, y: %d, direction: '%s'}", x, y, direction );
    //printf ( pos, "{x: %d, y: %d, direction: '%s'}", x, y, direction );
    
    //snprintf ( result, 100, "{x: %d, y: %d, direction: '%s'}", x, y, direction );
    
    //puts (s_ptr);
   // sprintf(result, "{x: %d, y: %d, direction: '%s'}", x, y, direction);
    return pos;
}

