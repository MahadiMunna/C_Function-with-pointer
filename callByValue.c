#include <stdio.h>

void func(int x){
    printf("Function x er address %p\n",&x);
}

int main(){
    int x=10;
    printf("main x er address - %p\n",&x);
    func(x);
    return 0;
}