#include<stdio.h>
#include<stdlib.h>
struct myArr{
    int totalSize;  // total size of Heap 
    int usedSize;   // Size to be used
    int* ptr;       // Point to first element of array
};
void makeArr(struct myArr* a , int totSize , int usedSize){

    // Using Pointer Dot

    // (*a).totalSize = totSize;
    // (*a).usedSize = usedSize;
    // (*a).ptr = (int*)malloc(totSize*sizeof(int));

    // Using Arrow Pointer

    a -> totalSize = totSize;
    a -> usedSize = usedSize;
    a -> ptr = (int*)malloc(totSize*sizeof(int));

}

void show(struct myArr* a){
    for(int i = 0;i< a->usedSize;i++){
        printf("%d\n",(a->ptr)[i]);
    }
}

void setVal(struct myArr* a){
    int num;    // number to input in array
    for(int i=0;i< a-> usedSize;i++){       // run from 0 to size to be used
        printf("Enter Element : %d \n",i+1);
        scanf("%d",&num);
        (a->ptr)[i]=num;    // assign value to DMA array
    }
}
int main(){
    struct myArr info;
    makeArr(&info,10,3);            // &info depicts that the address of the structure is pass into function pointers
    
    printf("Setting Values : \n");
    setVal(&info);
    printf("Showing Values : \n");
    show(&info);

    return 0;
}