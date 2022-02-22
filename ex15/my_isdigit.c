#include <stdio.h>

/*int my_isdigit( char param_1) {
    int numbers[] = {0,1,2,3,4,5,6,7,8,9};
    int num = numbers;

    for ( i = 0; i <=9; i++) {
        if(param_1 = num[i]){   

            return 1;
        }

        else {
            return 0;
        }

        
    }
}*/

//While loop variation
/*int my_isdigit( char param_1) {
    int numbers[] = 0,1,2,3,4,5,6,7,8,9;
    int num = numbers;

    while(num != '\0' && num!= param_1)
        num++;

    if (*letter)
        return 1;

    return 0;

    
}*/

// Various attempts tried above

//isdigit implementation C
int my_isdigit(int c){
    if (c >= '0' && c <= '9'){
        return 1;
    }
    else{
        return 0;
    }

}

//Or ASCII
// check out https://en.wikipedia.org/wiki/ASCII
// under Printable characters

/*int my_isdigit(int digit){
    if (digit >= 48 && digit <= 57){
        return 1;
    }
    else{
        return 0;
    }

}*/


