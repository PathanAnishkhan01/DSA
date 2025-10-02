#include<stdio.h>
void loop(int a[],int size){
    for(int i=0; i<size;i++){
        printf("%d ",a[i]);
    }

}
void main(){
    int arr[]={11,21,21,33,35,45,45,55,55};
    int sizeOfAnArray = sizeof(arr)/sizeof(arr[0]);
    printf("Before Remove Duplicate element From sorted Array: ");
    loop(arr,sizeOfAnArray);
    int prePoint =0;
    for(int i=1;i<sizeOfAnArray;i++){
        if(arr[prePoint]!=arr[i]){
            prePoint++;
            arr[prePoint] =arr[i];
        }
    }
    
    printf("\nAfter Remove Duplicate element From sorted Array: ");
    loop(arr,sizeOfAnArray);
}