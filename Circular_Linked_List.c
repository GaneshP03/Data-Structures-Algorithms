// Circular Linked lIST
#include <stdio.h>
#include <stdlib.h>
int n;
struct Node{
 struct Node* next;
 int data;
};
// Searching in a CLL 
int Search(struct Node* head,int elm){
    int c=0;
    struct Node* temp=head;
    do{
       if(temp->data==elm){
        c=1;
        break;
       }
       temp=temp->next;
    }while(temp!=head);
    return c;
}
// Deletion of an Element at the start in CLL
struct Node* Delete_At_Start(struct Node* head){
    struct Node* p=head;
    while(p->next!=head){
        p=p->next;
    }
      p->next=head->next;
      free(head);
      head=p->next;
    return head;
}

// Deletion of an Element at the end in a CLL
struct Node* Delete_At_End(struct Node* head){
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->next!=head){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
// Insert In between
struct Node* InsertInBetween(struct Node* head,int data,int pos){
    if(pos>n){
      printf("Insertion Not Possible");
      return ;
    }
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  struct Node* p=head;
 
  int i=1;
  while(i!=pos-1){
    
    p=p->next;
    i++;
  }
  newnode->data=data;
  newnode->next=p->next;
  p->next=newnode;
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

    if(Search(head,3)==1){
        printf("Element Found");
    }
    else{
        printf("Element Not Found");
    }
    
}