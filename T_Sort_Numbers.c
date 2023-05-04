#include <stdio.h>

void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    int newArr[3];
    for(int i=0;i<3;i++){
        newArr[i] = arr[i];
    }
    sort(newArr,3);
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}