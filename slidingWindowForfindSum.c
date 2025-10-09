#include<stdio.h>
void main(){
    int arr[] = {1,3,5,6,30,20,10};
    int sizeOfAnArr = sizeof(arr)/sizeof(arr[0]); //find array size using sizeof method.
    // printf("%d",sizeOfAnArr);
    int sizeOfSubArr=3; 
    int maximum = 0;
    int window =sizeOfSubArr; // create window with same value as subarray size.
    int currentSum =0;
    // sliding Window Technique.
     for (int i = 0; i<window;i++){
        currentSum = currentSum + arr[i];
     }
     maximum =currentSum;
     for(int i =1; i<sizeOfAnArr;i++){
        //sliding Window.
        currentSum = currentSum - arr[i-1] + arr[i+window-1];
        if(currentSum>maximum){
            maximum =currentSum;
        }
     }
     printf("%d",maximum);
}