#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* top=NULL;
// Function to check if stack is empty.
int IsEmpty(){
  if(top==NULL){
    return 1;
  }
}
// Function to check if stack is full.
int IsFull(){
    if(!IsEmpty()){
        return 1;
    }
}

// Deleting a element in a stack.
void pop(){
    struct Node* temp=top;
    top=top->next;
    free(temp);
}

// Creating Node to be pushed in the linked list.
void push(int x){
  struct Node* newnode=(struct Node*)malloc(sizeof(struct Node*));
  newnode->data=x;
  newnode->next=top;
  top=newnode;
}
 //Displaying the Stack.
 void print(){
    struct Node* temp=top;
    while(top!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
 }

int main(){
    int n;
    printf("Enter the number of elements in the linked list ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        printf("Enter the data: ");
        scanf("%d",&x);
        push(x);
        
    }
    pop();
    print();
}
