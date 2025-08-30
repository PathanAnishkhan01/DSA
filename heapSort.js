function heapify(A,n,i) {
    let largest = i;
    let left =i * 2 + 1;
    let right =i * 2 + 2; 

    if(left<n && A[largest]<A[left]){
        largest = left;
    }
    if(right<n && A[largest]<A[right]){
        largest = right;
    }

    if(i!=largest){
        let temp = arr[i];
        arr[i] =arr[largest];
        arr[largest]=temp;
        heapify(A,n,largest);
    }    
}

function heapSort(A,n) {

    //Step1: Create max-heap using heapify Method.
    for(let i=Math.floor(n/2-1); i>=0 ; i--){
        heapify(A,n,i);
    }

    //Step2: Delete Element from heap and add deleted element in free space.
    for(let i = n-1; i>=1; i--){
        temp =A[i];
        A[i] = A[0];
        A[0] = temp;
        heapify(A,i,0);
    } 
}

let arr=[11,10,22,4,3];
console.log(`This is Unsorted list:- ${arr}`);
heapSort(arr,arr.length);
console.log(`This is Sorted by Using Heapsort(heapifyMethod):- ${arr}`);