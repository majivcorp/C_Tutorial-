#include <stdio.h>

char *my_strrchr( char *s, int c)
{
    char *isCharFind = NULL;
    //handling null pointer
    if(s != NULL)  //checks if s is pointing at a null character
    {
        do
        {
            if( *s == (char)c )
            {
                isCharFind=s;
            }
        }
        while(*s++);
    }
    return isCharFind;
}


//Material sourced from https://aticleworld.com/strrchr-function-in-c-cpp/
//Material is sourced from https://stackoverflow.com/questions/1296843/what-is-the-difference-between-null-0-and-0 <= C standard; http://www.open-std.org/JTC1/SC22/WG14/www/docs/n1124.pdf



/* While loop Iteration https://www.tutorialgateway.org/c-program-to-find-last-occurrence-of-a-character-in-a-string/   */

