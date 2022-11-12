// Circular Linked lIST
#include <stdio.h>
#include <stdlib.h>
int n;
struct Node{
 struct Node* next;
 int data;
};
// Deletion of an Element in a CLL

// Insert In between
struct Node* InsertInBetween(struct Node* head,int data,int pos){
    if(pos>n){
      printf("Insertion Not Possible");
      return ;
    }
  struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
  struct Node* p=head;
 
  int i=1;
  while(i!=pos-1){
    
    p=p->next;
    i++;
  }
  ptr->data=data;
  ptr->next=p->next;
  p->next=ptr;
  return head;
}


// Insert at the tail.
struct Node* InsertAtEnd(struct Node* head, int data){
struct Node* ptr=(struct Node* )malloc(sizeof(struct Node));
ptr->data=data;
struct Node* p=head->next;
while(p->next!= head){
    p=p->next;
}
p->next=ptr;
ptr->next=head;
return head;
}


// Insert at the head.
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}
void print(struct Node* head){
struct Node* temp=head;

do{
    printf("%d ",temp->data);
    temp=temp->next;
}while(temp!=head);
printf("\n");
} 
int main(){

    struct Node* head=(struct Node* )malloc(sizeof(struct Node* ));
    printf("Enter the elements");
    scanf("%d",&n);
    scanf("%d",&head->data);
    head->next=head;
    struct Node*temp=head;
    for(int i=1;i<n;i++){
        struct Node* newnode=(struct Node*)malloc(sizeof(struct Node*));
        scanf("%d",&newnode->data);
        newnode->next=head;
        temp->next=newnode;
        temp=temp->next;
    }

    print(head);
    // head=insertAtFirst(head,12);
    head=InsertAtEnd(head,10);
    // head=InsertInBetween(head,12,7);
    print(head);
}