// remember this 
    // int* ptr = &variable : ptr point to variable address
    // ptr = contain address
    // *ptr = contain value
    // struct var{int data , int* val}
    // struct var* ptr : means creating address pointer for struct var
    // *ptr.data = anything : means assigning value to ptr struct
    // same as
    // ptr -> data = anything
    // ptr = DMA : store in heap address point to first of memory block



#include<stdio.h>
#include<stdlib.h>
struct Node{            // create a Node 
    int data;           // data of a node
    struct Node* next;  // pointer to next Node
};

void display(struct Node* ptr){
    while(ptr!=NULL){
        printf("ELEMENTS ARE : %d \n",ptr -> data);
        ptr = ptr -> next;
    }
}
int main(){
    // create all nodes who will be assigned DMA at heap : point to starting of memory block

    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    // assign each node DMA to start location address of each block memory

    head = (struct Node* )malloc(sizeof(struct Node));
    second = (struct Node* )malloc(sizeof(struct Node));
    third = (struct Node* )malloc(sizeof(struct Node));
    fourth = (struct Node* )malloc(sizeof(struct Node));

    // assign each nodes to their part

    head -> data = 25;
    head -> next = second;

    second -> data = 26;
    second -> next = third;

    third -> data = 27;
    third -> next = fourth;

    fourth -> data = 28;
    fourth -> next = NULL;

    display(head);
    
    return 0;
}
