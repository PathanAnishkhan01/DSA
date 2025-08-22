let arr=[7,6,5,4,3,2,1,10,44,3,3]
function bubbleSort(arr,low,high){

    if(low<high){
        let bubbleElement = low;
        for(let i=1;i<high;i++){
            if(arr[bubbleElement]>arr[i]){
                let temp  = arr[i];
                arr[i] =arr[bubbleElement];
               arr[bubbleElement] =temp;
            }

            bubbleElement =i;
        }
        bubbleSort(arr,low,high-1);
    }

}


let arrlength =arr.length;
bubbleSort(arr,0,arrlength);
console.log(arr);