#include<stdio.h>
void main(){

    int arr[]= {1,2,33,55,3,45,33,4,22};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);
    //  printf("%d",sizeOfArr);
    int subArraySize =4;
    // Find maximum sum of subarray.
    int max = 0;
     for (int i =0;i<=sizeOfArr-subArraySize;i++){
        int currentSum =0;
        for (int j = i; j<i+subArraySize; j++){
            currentSum = currentSum + arr[j];
            printf("%d",arr[j]);
        }
        if(max<currentSum){
    
            max = currentSum;
        }
        printf("Completed %d",i);
     }

     printf("Maximum sum is %d",max);

}