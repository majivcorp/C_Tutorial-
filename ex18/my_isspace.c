#include <stdio.h>
//isspace implementation C

// check out https://en.wikipedia.org/wiki/ASCII
// under Printable characters

int my_isspace(char c){
    if (c == 32 ){
        return 1;
    }
    else{
        return 0;
    }

}


