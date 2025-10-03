#include<stdio.h>

void result(int loc){
    if(loc ==-1){
         printf("Element Not found");
       
    }else{
         printf("Element find at on %d position",loc);
    }
}

int linearSearch(int arr[],int search, int size){
        int location = -1;
        int i =0;
        while(i<size && arr[i]!=search){
            i++;
        }
        if(arr[i]==search){
            return location= i;
        }
 return location;
    }

void main(){

int arr[] = {11,33,12,21,33,55,66,45};
int sizeOfAnArray =sizeof(arr)/sizeof(arr[0]);
result(linearSearch(arr,45,sizeOfAnArray));
}

