#include <stdio.h>

int main(){
    int x=10;
    int *ptr=&x;
    printf("Adress of x %p\n",ptr);
    //x is same as *ptr
    printf("value of x %d\n",*ptr);
    printf("size of ptr %d\n",sizeof(ptr));
    printf("adress of ptr %p\n",&ptr);

    return 0;
}