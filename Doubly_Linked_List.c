#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node* next;
struct Node* prev;
};
// Insertion at the tail of a Doubly Linked List.
struct Node* InsertAtTail(struct Node* tail,int data){
    struct Node* newnode=(struct Node* )malloc(sizeof(struct Node*));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=tail;
    tail->next=newnode;
    return newnode;
}
// Insertion at the head of a Doubly linked list
struct Node* InsertAtHead(struct Node* head,int data){
    struct Node* newnode=(struct Node* )malloc(sizeof(struct Node*));
    newnode->data=data;
    head->prev=newnode;
    newnode->next=head;
    return newnode;
}

//Printing using the backward link.
void DisplayBack(struct Node* tail){
   struct Node* temp=tail;
   while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->prev;
   }
}

// Printing using the forward link.
void Display(struct Node* head){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the number of elements in the linked List.");
    scanf("%d",&n);
    struct Node* tail;// To keep track of the last Node
    struct Node* head=(struct Node*)malloc(sizeof(struct Node*));
    scanf("%d",&head->data);
    head->next=NULL;
    head->prev=NULL;
    struct Node* temp=head;
    for(int i=1;i<n;i++){
        struct Node* newnode=(struct Node*)malloc(sizeof(struct Node*));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=temp;
        temp->next=newnode;
        temp=temp->next;
        tail=temp;
    }
    Display(head);
    // DisplayBack(tail);
    // head=InsertAtHead(head,12);
    tail=InsertAtTail(tail,12);
    Display(head);
}