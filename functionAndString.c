#include <stdio.h>
#include <string.h>

//as we can know the length of string thats wy we don't need to pass length of string

void fun(char ar[]){
    printf("\n%d",strlen(ar));
}
int main(){
    char str[]="Hello";
    int sz = sizeof(str)/sizeof(char);
    printf("%d",sz);
    fun(str);
    return 0;
}