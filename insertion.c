#include <stdio.h>
int InsertSort(int arr[],int n){
    int temp;
 for(int i=1;i<n;i++){
    
    for(int j=i;j>0;j--) {
     if(arr[j]<arr[j-1]){
        temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
     }
     else{
        break;
     }
    }
 }
}
int main(){
    int arr[5]={4,10,43,30,0};
    int n=5;
    InsertSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}