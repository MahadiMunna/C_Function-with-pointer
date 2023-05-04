#include <stdio.h>

void printer(int n){
    for(int i=1;i<=n;i++){
        if(i==n){
            printf("%d",i);
        }
        else{
            printf("%d ",i);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printer(n);
    return 0;
}