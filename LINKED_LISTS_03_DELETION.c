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
// delete the first element
struct Node* del_first(struct Node* head){
    struct Node* ptr = head;  // point ptr to head
    head = head->next;        // point head to next node
    free(ptr);
    return head;
}
// delete element at a given index
struct Node* del_at_index(struct Node* head,int index){
    struct Node* p = head;
    struct Node* q = head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct Node* del_at_last(struct Node* head){
    struct Node* p = head;
    struct Node* q = head->next;
    while(q->next !=NULL){
        p=p->next;
        q=q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
struct Node* del_by_val(struct Node* head, int value){
    struct Node* p = head;
    struct Node* q = head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
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

    // before
    display(head);
    // head = del_first(head);
    // head = del_at_index(head,2);
    // head = del_at_last(head);
    head = del_by_val(head,27);
    // after
    printf("-----------\n");
    display(head);
    return 0;
}