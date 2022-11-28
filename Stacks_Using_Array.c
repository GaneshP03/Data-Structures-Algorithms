#include <stdio.h>
int st[100],top=-1;
int n;
// Funtion to check if stack is full.
int IsFull(){
    if(top==(n-1)){
        return 1;
    }
    else{
        return 0;
    }
}
// Function to check if stack is empty.
int  IsEmpty(){
    if(top==-1){
        return 1;
    }
    else{
       return 0; 
    }
}
// Peek Function in Stack.
int Peek(){
    if(top==-1){
        printf("Stack is Empty");
    }
    else
    return st[top];
}
// To Insert Element in a Stack.
void push(int x)
{   top++;
    st[top] = x ;
}

// To Delete Item in Stack.
void pop()
{
    if(top==-1) 
    printf("Stack Overflow");
    else 
     st[top--];
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d ",st[i]);
    }
}

int main()
{
scanf("%d",&n);
for(int i=0;i<n;i++){
    int x;
    scanf("%d",&x);
    push(x);
}
    return 0;
}