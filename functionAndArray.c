#include <stdio.h>

//arr pass by value
// void fun(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

//arr call by referece
void fun(int *arr, int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[5]={10,20,30,40,60};
    int sz=sizeof(arr)/sizeof(int);
    printf("%d\n",sz);
    fun(arr,sz);
    return 0;
}