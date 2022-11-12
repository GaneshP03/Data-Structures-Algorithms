#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
// Searching in a Linked List 
int search(struct Node* head,int elm){
  int c=0;
  struct Node* temp=head;
  while(temp!=NULL){
     if(temp->data==elm){
      c=1;
      break;
     }
     temp=temp->next;
  }
  return c;
}

// Delete at End.
struct Node* DeleteAtEnd(struct Node* head){
  struct Node* p=head;
  struct Node* q=head->next;
  while(q->next!=NULL){
    p=p->next;
    q=q->next;
  }
  p->next=q->next;
  free(q);
  return head;
}
// Deletion at Start.
struct Node* DeleteAtFirst(struct Node* head){
  struct Node* temp=head;
  head=head->next;
  free(temp);
  return head;
}
// Inserting at Tail.
struct Node* InsertAtTail(struct Node* head,int data){
  struct Node* newnode=(struct Node*)malloc(sizeof(struct Node*));
  newnode->data=data;
  struct Node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  newnode->next=NULL;
  return head;
}


// Inserting at head.
struct Node* InsertAtHead(struct Node* head,int data){
if(head==NULL){
printf("List is empty");
return ;
}
  struct Node* newnode=(struct Node*)malloc(sizeof(struct Node*));
  newnode->data=data;
  newnode->next=head;
  return newnode;
}
// Inserting In bw
struct Node* Insertinbw(struct Node* head,int data,int index){
  if(head==NULL){
    printf("List is Empty");
    return ;
  }
  struct Node* newnode=(struct Node*)malloc(sizeof(struct Node*));
  newnode->data=data;
  struct Node* p=head;
  int i=1;
  while(i!=index-1){
    p=p->next;
    i++;
  }
  newnode->next=p->next;
  p->next=newnode;
  return head;
}

// Creating the List.
void creation(struct Node* head){
  int n;
  scanf("%d",&n);
 if(n==0){
  head=NULL;
  return ;
 }
  head->next=NULL;
  scanf("%d",&head->data);
  struct Node* temp=head;
  for(int i=1;i<n;i++){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node*));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp->next=newnode;
    temp=temp->next;
  }
  }

void display(struct Node* head){
  
  
 if(head==NULL){
  printf("List is Empty");
  return ;
 }
 struct Node* temp=head;
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf("\n");
}

int main(){
  struct Node* head=(struct Node*)malloc(sizeof(struct Node*));
  creation(head);

  display(head);
  // head=Insertinbw(head,12,4);
  // display(head);
  // if(search(head,12)==1){
  //   printf("Element Found");
  // }
  // else{
  //   printf("Element Not Found");
  // }
  return 0;
}