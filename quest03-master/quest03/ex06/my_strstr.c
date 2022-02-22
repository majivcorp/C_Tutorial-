#include <stdio.h>
#include <string.h> 
#include <stdbool.h>

/*
 char * my_strstr( char *s1,  char *s2)
{
 int i,j,k,len2,count=0;
 char *p;

 for(len2=0;*(s2+len2)!='\0';len2++); //len2 becomes the length of s2
 for(i=0;*(s1+i)!='\0';i++)
 {
  if(*(s1+i)==*s2)
  {
  for(j=i,k=0;*(s2+k)!='\0';j++,k++)
   {
    if(*(s1+j)==*(s2+k))
    count++;
    else count=0;
    if(count==len2)
    {
     return s1+i;
    }
   }
  }
 }
 return NULL;
} // iteration failed
*/


//Material sourced from https://stackoverflow.com/questions/3850241/my-strstr-returning-null-even-if-the-string-to-be-found-is-at-the-index-0
//Material sourced from https://www.techiedelight.com/implement-strstr-function-c-iterative-recursive/
/*
char *my_strstr( char *s, char* c)
{
    int H = strlen(haystack);
    int N = strlen(needle);
    int i = 0;
    int start, j;

    if(N == 0) {
        return s;
    }

    while(i < H - N +1){
        if (s[i] == c[0]){
            start = NULL;
            j = 1;
            while(j < N and s[i+j] == c[j]){
                if (s[i] == c[0]){
                    start = = i + j;
                j += 1;
                }
           }
           if(j == N){
               return s[i:];
           }
           if(start != NULL){
               i = start;
           }
           else{
               i = i + j;
           } 
        }
        else{
            i += 1;
        }

    }
    return NULL;
}// iteration failed
*/
//Material sourced from https://gist.github.com/dapangmao/1656134e15ef2116da19 => ctrl + f "Returns a pointer to the first occurrence of needle in haystack, or null if needle is not part of haystack."

/*

char* my_strstr(char* param_1, char* param_2)
{
    
    int i = 0;
    int  j = 0; 

    if(param_2 == 0 || strlen(param_2) == strlen(param_1)){
        return param_1;
    }
    if(strlen(param_2) > strlen(param_1)){
        return NULL;
    }
    
    while (param_1[i] != '\0') {
        
        while (param_2[j] != '\0') {
            if (param_1[i] != param_2[j] ) {
                break;
            }
            if(param_2[j] == '\0'){
                return &param_1[i];
            }
            /*if(j == strlen(param_2)-1){
                return &param_1[i];
            }*/ /*
            j++;
        }
        i++;
    }
    if(j> i){
    return NULL;
    }
    return NULL;
}// iteration failed

*/

/*
char* my_strstr(char* param_1, char* param_2)
{
    
    int i = 0;
    int  j = 0; 

    if(param_2[j] == '\0'|| strlen(param_2) == strlen(param_1)){
        return param_1;
    }
    if(param_2 == param_1){
        return param_1;
    }
    if(strlen(param_2) > strlen(param_1)){
        return NULL;
    }
    
    while (param_1[i] != '\0') {
        
        while (param_2[j] != '\0') {

            if (param_1[i] != param_2[j] ) {
                break;
            }
            j++;
        }    
        if(param_2[j] == '\0' || j == strlen(param_2)){
        
            return (&param_1[i]);
        }
        i++;

    }
    if(j> i){
    return NULL;
    }
    return NULL;
} // iteration failed
*/ 

char * my_strstr(char * str, char * substr)
{
    while(*str)
    {
        char * begin = str;
        char * pattern = substr;

        while(*str && *pattern && *str == *pattern)
        {
                str++;
                pattern++;
        }
        if(!*pattern)
                return begin;
        str = begin + 1;
    }
        return 0;
}


//Material sourced from https://stackoverflow.com/questions/38064977/segmentation-fault-while-implementing-my-own-strstr-function
//Material sourced from https://redquark.org/leetcode/0028-implement-strstr/
//Material sourced from https://www.youtube.com/watch?v=AsysPr44uGk
//Material sourced from https://ruclip.com/video/bzoCm_w8yx0/leetcode-tutorial-28-implement-strstr.html