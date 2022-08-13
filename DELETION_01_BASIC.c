#include<stdio.h>

// display array
void display(int arr[],int size){
    printf("ARRAY IS : \n");
    for(int i=0;i<size;i++){
        printf("%d \n",arr[i]);
    }
    printf("\n");
}

// delete element
int deleteArr(int arr[],int index,int size){
    for(int i = index;i<size-1;i++){        // from desired index to end of array
        arr[i] = arr[i+1];                  // assign deleting index with next elements of array so that the given index element is deleted.
    }
}
int main(){
    int arr[100] = {10,22,44,66,11};
    int index = 2,size = 5,capacity = 100;
    printf("BEFORE DELETION \n");
    display(arr,size);
    deleteArr(arr,index,size);
    size--;                                 // size of array decrease as deletion
    printf("AFTER DELETION \n");
    display(arr,size);
    return 0;
}