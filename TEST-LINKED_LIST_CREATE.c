#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


void display(struct Node* ptr){
    while(ptr!=NULL){
        printf("ELEMENTS ARE : %d \n",ptr -> data);
        ptr = ptr -> next;
    }
}

int main(){
    // initialise

    struct Node* head;    
    struct Node* one;    
    struct Node* two;    
    struct Node* three;    

    // assign DMA

    head = (struct Node* )malloc(sizeof(struct Node));
    one = (struct Node* )malloc(sizeof(struct Node));
    two = (struct Node* )malloc(sizeof(struct Node));
    three = (struct Node* )malloc(sizeof(struct Node));

    // value the nodes

    head->data = 25;
    head->next = one;

    one->data = 26;
    one->next = two;

    two->data = 27;
    two->next = three;

    three->data = 28;
    three->next = NULL;

    display(head);
return 0;
}

