#include <stdio.h>
void MergeSort(int arr[],int brr[],int n,int m){
int c[10];
int i=0,j=0,k=0;
while(i<n && j<m){
    if(arr[i]<=brr[j]){
        c[k]=arr[i];
        i++;
    }
    else{
        c[k]=brr[j];
        j++;
    }
    k++;
}

while(i<n){
    c[k]=arr[i];
    i++;
    k++;
}
while(j<m){
    c[k]=brr[j];
    j++;
    k++;
}

for(int i=0;i<k;i++){
    printf("%d ",c[i]);
}
}

int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={10,20,30,40,50};
    int n=5;
    int m=5;
    MergeSort(arr,brr,n,m);
    return 0;
}