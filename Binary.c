#include <stdio.h>
 
 int BinarySearch(int arr[],int n,int target){
   int ans=-1;
   int start=0;
   int end=n-1;
   int mid=(start+end)/2;
   while(start<=end){
    if(arr[mid]==target){
        ans=1;
        break;
    }
    if(arr[mid]<target){
        start=mid+1;
    }
    if(arr[mid]>target){
        end=mid-1;
    }
    mid=(start+end)/2;
   }
     return ans;
 }
 int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int x=BinarySearch(arr,n,5);
    if(x==1){
        printf("Element  found");
    }
    else{
        printf("Element not found");
    }
 }