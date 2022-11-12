#include <stdio.h>


void QuickSort(int arr[],int s,int e){

    if(s<e){
        int t;
        int p=s;
        int i=s;
        int j=e;

        while(i<j){

            while(arr[i]<arr[p] && (i<e)){
                i++;
            }

            while(arr[j]>arr[p] && (j>s)){
                j--;
            }
            if(i<j){
              t=arr[i];
              arr[i]=arr[j];
              arr[j]=t;               
            }
        }
        t=arr[p];
        arr[p]=arr[j];
        arr[j]=t;

        QuickSort(arr,s,j-1);
        QuickSort(arr,j+1,e);
    }
}

int main(){
    int arr[5]={90,100,20,10,5};
    int n=5;
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}