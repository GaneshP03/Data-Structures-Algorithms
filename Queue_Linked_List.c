#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *front,*rear;int n;
void enqueue(int x)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("\n overflow");
        return;
    }
    else
    {
         ptr->data=x;
        if(front==NULL)
        {
            front=ptr;
            rear=ptr;
            front ->next=NULL;
            rear->next=NULL;
        }
        else
        {
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }
    }
}
void dequeue()
{
    struct node *ptr;
    if(front==NULL)
    {
        printf("\n underflow");
        return;
    }
    else
    {
        ptr=front;
        front=front->next;
        free(ptr);
    }
}
void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {    
        while(ptr != NULL)   
        {  
            printf("\n%d\n",ptr -> data);  
            ptr = ptr -> next;  
        }  
    }  
}  
int main()
{
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int x;
    printf("Enter Data: ");
    scanf("%d",&x);
    enqueue(x);
  }
  display();
  }