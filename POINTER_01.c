#include<stdio.h>
int main(){
    int a = 25;  // a value
    int* ptr = &a;  // a address
    printf("The number is %d ",a);
    printf("The number is %d ",*ptr);
    printf("Address : %p",ptr);
    return 0;
}