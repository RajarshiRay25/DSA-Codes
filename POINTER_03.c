#include<stdio.h>
struct myList
{
    char name[40];
    int age;
};

int main(){
    struct myList raj = {"Raj",40};
    printf("Name : %s \n Age : %d \n",raj.name,raj.age);
    struct myList* ptr;
    ptr = &raj;  // Target the structure
    (*ptr).age = 22;  // Change age *ptr denotes pointer target value
    printf("Name : %s \n Age : %d \n",raj.name,raj.age);
    ptr -> age = 40; // Arrow op
    printf("Name : %s \n Age : %d \n",raj.name,raj.age);
    printf("Adress : %d \n",ptr);
    return 0;
}