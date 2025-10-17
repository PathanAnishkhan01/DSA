#include<stdio.h>
#include<math.h>
void minHeap(int files[],int n, int i){
    int minimum = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if(left <n && files[minimum]>files[left]){
        minimum =left;
    }
    if(right <n && files[minimum]>files[right]){
        minimum =right;
    }

    if(minimum != i){
        int temp =files[minimum];
       files[minimum] =files[i];
       files[i] = temp;
        minHeap(files,n,minimum);
    }

}
//  remove minimum element.
int extractHeap(int arr[], int *n ){
    int min = arr[0];
    arr[0] = arr[*n-1];
    (*n)--;
    minHeap(arr,*n,0);
    return min;
}

void insertHeap(int files[], int *n, int value){
    files[*n] =value;
    (*n)++;
    for(int i = floor(*n/2)-1; i>=0;i--){

        minHeap(files,*n,0);
    }
}

int optimalMergePattern(int files[],int n){
    int totalCost =0;
    // Cunstruct Min-heap.
    for(int i = floor(n/2)-1;i>=0;i--){
        minHeap(files,n,i);
    } 

    while(n>1){
        int a = extractHeap(files,&n);
        int b = extractHeap(files,&n);
        int cost =a+b;
        totalCost += cost;
        insertHeap(files,&n,cost);
    }

return totalCost;
}

void main(){
    int files[] = {30,10,20};
    int sizeOfArr = sizeof(files)/sizeof(files[0]);
    printf("%d",optimalMergePattern(files,sizeOfArr));
}