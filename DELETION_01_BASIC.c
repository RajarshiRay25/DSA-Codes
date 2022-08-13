#include<stdio.h>
void display(int arr[],int size){
    printf("ARRAY IS : \n");
    for(int i=0;i<size;i++){
        printf("%d \n",arr[i]);
    }
    printf("\n");
}

int deleteArr(int arr[],int index,int size){
    for(int i = index;i<size-1;i++){
        arr[i] = arr[i+1];
    }
}
int main(){
    int arr[100] = {10,22,44,66,11};
    int index = 2,size = 5,capacity = 100;
    display(arr,size);
    deleteArr(arr,index,size);
    size--;
    display(arr,size);
    return 0;
}