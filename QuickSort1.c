#include <stdio.h>
  int partition( int arr[], int s, int e) {

    int temp,pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    
    temp=arr[pivotIndex];
    arr[pivotIndex]=arr[s];
    arr[s]=temp;

    //Swaping the left and Right part of the array 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(i < pivotIndex) 
        {
            i++;
        }

        while(j> pivotIndex) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }

    return pivotIndex;

}

  void QuickSort(int arr[],int s,int e){
    // Base Case.
    if(s>=e){
        return ;
    }

    // partition of the array.
    int p=partition(arr,s,e);

    // Sorting the left part
    QuickSort(arr,s,p-1);

    //Sorting the right part.
    QuickSort(arr,p+1,e);


  }
  int main(){
     int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n=10;
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
  }