#include<stdio.h>
#include<stdlib.h>

void printingList(int arr[],int sizeOfArr){
    for(int i =0;i<sizeOfArr;i++){
        printf("%d ",arr[i]);
    }
}

int partition(int arr[],int left,int right){
    int pivot = arr[left];
    int p =left;
    int q = right;

    while(p<q){
        do{
            p++;
        }while(pivot>arr[p]);
        do{
            q--;
        }while(pivot<arr[q]);

        if(p<q){
           int temp = arr[p];
           arr[p] =arr[q];
           arr[q] =temp;
        }
    }
    int temp = arr[left];
    arr[left] = arr[q];
    arr[q] = temp;
    return q;
};

void quickSort(int arr[],int left,int right){
    if(left <right){
    int part = partition(arr,left,right);
    quickSort(arr,left,part-1);
    quickSort(arr,part+1,right);
    }
}

void main(){
    int arr [] ={41,35,11,44,75};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array:- ");
    printingList(arr,sizeOfArr);
    // printf("%d",sizeOfArr);
    quickSort(arr,0,sizeOfArr-1);
    
    printf("\nSorted Array:- ");
    printingList(arr,sizeOfArr);
}