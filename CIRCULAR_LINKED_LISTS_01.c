#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void display(struct Node* head){
    struct Node* p = head;
    do{
        printf("ELEMENTS ARE : %d \n",p->data);
        p=p->next;
    }while(p!=head);
}
struct Node* insert(struct Node* head,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    ptr->data = data;

    struct Node* iterator = head->next;
    while(iterator->next!=head){
        iterator = iterator->next;
    }
    // pointer at end now
    iterator->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head ->data = 25;
    head ->next = second;

    second ->data = 26;
    second ->next = third;

    third ->data = 27;
    third ->next = fourth;

    fourth ->data = 28;
    fourth ->next = head;  // Instead of NULL , point last node to head ... circular connection

    head = insert(head,55);
    display(head);
    return 0;
}