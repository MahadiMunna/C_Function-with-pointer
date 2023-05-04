#include <stdio.h>

//when address pass to a function that is called call by reference.
void func(int *p){
    *p=20;
}

int main(){
    int x=10;
    func(&x);
    printf("x=%d",x);
    return 0;
}