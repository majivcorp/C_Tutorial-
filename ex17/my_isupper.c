#include <stdio.h>
//isupper implementation C

// check out https://en.wikipedia.org/wiki/ASCII
// under Printable characters

int my_isupper(char c){
    if (c >= 65 && c <= 90 ){
        return 1;
    }
    else{
        return 0;
    }

}