#include<stdio.h>

// display the array
void display(int arr[],int size){
    printf("ARRAY IS : \n");
    for(int i=0;i<size;i++){
        printf("%d \n",arr[i]);
    }
    printf("\n");
}

// insert element
int insertElem(int arr[],int elem,int size,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    else{
        for(int i = size-1;i>=index;i--){       // array iterate from last -> to index of element to add 
            arr[i+1] = arr[i];      // assign next empty block to previous shifted elements..Shift elements to next locations to empty the desired index
        }
        arr[index] = elem;    // assign desired element to index
        return 1;
    }
}
int main(){
    int arr[100] = {1,33,55,22,674};
    int size = 5,elem = 23,index = 3,capacity = 100;
    printf("BEFORE INSERTION. \n");
    display(arr,size);
    insertElem(arr,elem,size,capacity,index);
    size++;   // new elem added -> size of array increase
    printf("AFTER INSERTION. \n");
    display(arr,size);
    return 0;
}