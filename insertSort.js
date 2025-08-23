let arr =[11,22,11,10,5];

function insertSort(arr){
    for(let i = 1;i<arr.length;i++){
        let j ,key;
        key =arr[i];
        j= i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
           j--;
        }
        arr[j+1]=key;
    }

}

insertSort(arr);

console.log(arr);