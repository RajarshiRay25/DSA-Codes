#include<stdio.h>
int main(){
    // Numbers

    int a = 25;
    int* ptr = &a;
    printf("%d \n",ptr+1);

    // Arrays

    int arr[] = {1,2,3,4,5,6,7};
    printf("Element at position 3 : %d \n",arr[4]);
    printf("Adress of Array 4th elem : %d \n",(arr+3));
    printf("Adress of Array 4th elem : %d \n",&arr[3]);
    return 0;
}