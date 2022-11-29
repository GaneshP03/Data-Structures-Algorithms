#include <stdio.h>

int q[100];
int front=-1,rear=-1;
int n;


int IsEmpty(){
    if(rear==-1 && front== -1){
        return 1;
    }
    return 0;
}
int IsFull(){
    if(!IsEmpty()){
        return 1;
    }
    else 
    return 0;
}
// Insertion in Queue.
// Insertion in the queue can be only done with the help of rear variable.
void enqueue(int x){
    if(rear==(n-1) || front>rear){
        printf("Overflow");
    }
   if(front==-1 && rear==-1){
    front=rear=0;
    q[rear]=x;
   }
   else{
    rear++;
    q[rear]=x;
   }
}

// Deletion in Queue.
// Deletion in queue can be only done with the help of front variable.
void dequeue(){
    if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}

void print(){
    if(front== -1 || rear==-1){
        printf("Queue is empty");
    }
    else{
        for(int i=front;i<rear+1;i++){
            printf("%d ",q[i]);
        }
    }
}
int main(){
    printf("Enter the number of elements ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        printf("Enter the Data: ");
        scanf("%d",&x);
        enqueue(x);
    }
    printf("%d",IsFull());
}