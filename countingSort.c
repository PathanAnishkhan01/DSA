#include<stdio.h>
#include<math.h>

void printArr(int arr[],int sizeOfArr){
    for(int i =0;i<sizeOfArr;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
};

void fill(int arr[],int size){
    for(int i =0;i<size;i++){
        arr[i] = 0;
    }
}

void countingSort(int arr[], int sizeOfArr){
    int range = 0;
    // find the Maximum element.
    for(int i = 0;i<sizeOfArr;i++){
        if(range<arr[i]){
            range =arr[i];  
        }
    }
    // create array for count the digit.
    int count[range+1];
    int outputArr[sizeOfArr];

    // fill 0 at all position in the both arrays.
    fill(count,range+1);
    fill(outputArr,sizeOfArr);

    // count occurences.
    for(int i =0; i<sizeOfArr;i++){
        count[arr[i]]++;
    }
    // printf(" \n");
    
    // cumulative sum
    for (int i =1 ;i<=range; i++){
        count[i] += count[i-1];
        // printf("%d ",count[i]);
    };

    // Build output array.
    for(int i =sizeOfArr-1;i>=0;i--){
        outputArr[count[arr[i]]-1] =arr[i];
        count[arr[i]]--;
    }
    
    
    // Copy back to original Array.
    for(int i =0;i <sizeOfArr ;i++ ){
        arr[i] = outputArr[i];
        // printf("%d",arr[i]);
    }
};

void main(){
    int arr [] ={5,3,2,1,4};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);
    printArr(arr,sizeOfArr);
    countingSort(arr,sizeOfArr);
    printArr(arr,sizeOfArr);
}