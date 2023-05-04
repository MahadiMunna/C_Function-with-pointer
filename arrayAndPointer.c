#include <stdio.h>

int main(){
    int ar[5]={10,20,30,40,50};
    //here ar is the address of 0th index
    printf("0th index address - %p\n",&ar[0]);
    printf("0th index address - %p\n",ar);
    printf("0th index value - %d\n",ar[0]);
    printf("0th index value - %d\n",*ar);
    printf("1st index value - %d\n",*(ar+1));
    // that means ar[1] = *(ar+1)
    // that means 1[ar] = *(1+ar)
    printf("%d\n",*(ar+1));
    printf("%d\n",*(1+ar));
    printf("%d\n",1[ar]);
    printf("%d\n",ar[1]);
    return 0;
}