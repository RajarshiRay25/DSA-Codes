// This function "struct Node* insert" is a function which returns new head

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void display(struct Node* val){
    while(val!=NULL){
        printf("ELEMENTS ARE : %d \n",val -> data);
        val = val -> next;
    }
}

struct Node* insertFirst(struct Node* head , int data){
    // create DMA of node to insert
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    ptr -> data = data;
    ptr -> next = head;
    return ptr;
}

struct Node* insertEnd(struct Node* head,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    ptr->data = data;
    struct Node* p = head; // setting the initial point to start
    while(p->next != NULL){
        p=p->next;
    }

    // set the new node
    p->next = ptr;
    ptr->next = NULL;
    return head;

}

struct Node* insertAtIndex(struct Node* head,int index,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    struct Node* p = head; // setting the initial point to start

    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node* insertAfterNode(struct Node* head , struct Node* prevNode , int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    ptr->data=data;
    ptr->next = prevNode-> next;
    prevNode->next = ptr;
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


    head -> data = 25;
    head -> next = second;

    second -> data = 26;
    second -> next = third;

    third -> data = 27;
    third -> next = fourth;

    fourth -> data = 28;
    fourth -> next = NULL;

    printf("PRE INSERTION : \n");
    display(head);
    
    printf("POST INSERTION : \n");
    // head = insertFirst(head,24);
    // display(head);

    // head = insertEnd(head,56);
    // display(head);

    // head = insertAtIndex(head,2,99);
    // display(head);

    head = insertAfterNode(head,third,89);
    display(head);
    return 0;
}