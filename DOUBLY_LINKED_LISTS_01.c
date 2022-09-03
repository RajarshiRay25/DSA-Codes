#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

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
    head->prev = NULL;

    second ->data = 26;
    second ->next = third;
    second->prev = head;

    third ->data = 27;
    third ->next = fourth;
    third->prev = second;
    
    fourth ->data = 28;
    fourth ->next = NULL;
    fourth->prev = third;

    return 0;
}