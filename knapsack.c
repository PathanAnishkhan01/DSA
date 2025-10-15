#include<stdio.h>
void swap(float arr[],int i){
    float temp = arr[i];
    arr[i] =arr[i+1];
    arr[i+1] =temp;
}

void swapInt(int arr[],int i){
    int temp = arr[i];
    arr[i] =arr[i+1];
    arr[i+1] =temp;
}

float knapsack(int profit[],int weight[],int sizeOfArr ,int W){
    float praportion [3]; 
    float maximumProfit =0.0;

    for(int i =0;i<sizeOfArr;i++){
        praportion[i] = (float)profit[i]/weight[i];
    }



    for(int i =0; i<sizeOfArr-1; i++){
        for(int j = 0; j<sizeOfArr - i - 1;j++ ){
        if(praportion[j]< praportion[j+1]){
            swap(praportion,j);
            swapInt(profit,j);
            swapInt(weight,j);
        }
    }
    }
    

    for(int i=0;i<=sizeOfArr;i++){
        if (W == 0){
            break;
        }
        if(W>0 && weight[i]<=W){
            W = W - weight[i];
            maximumProfit = maximumProfit + profit[i];
        }else{
            maximumProfit =maximumProfit + profit[i]*((float)W/weight[i]);
            W=0;
        }
    }
    return maximumProfit;

}
    
void main(){
    int profit[] = {25,24,15}; 
    int weight[] = {18,15,10};
    int sizeOfArr =sizeof(profit)/sizeof(profit[0]);
    int W = 20; //knapsack(bag) capacity.
    float maximumProfit = knapsack(profit,weight,sizeOfArr,W);
    printf("Maximum Profit: %.2f",maximumProfit);
}