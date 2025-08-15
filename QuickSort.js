let a=[10,5,4,2,20];
let  lowerBound = 0;
 let upperBound = a.length-1;
 console.log("This is an Unsorted Array "+a);


function partition(lowerBound,upperBound) {
    let p,q,pivot;
    pivot = a[lowerBound];
    p =lowerBound;
    q =upperBound;
    while(p<q){
        do {
            p++;
        } while (a[p]<=pivot && p<=upperBound);

     while (pivot< a[q]){
        q--;
    };

        if(p<q){
            let temp = a[p];
            a[p] =a[q];
            a[q] = temp;
        }
    }
    let temp = a[lowerBound];
    a[lowerBound] = a[q];
    a[q] = temp;
    return q;
};


function quickSortAlgorithm(lowerBound,upperBound){
    if(lowerBound<upperBound){
        let part = partition(lowerBound,upperBound);
        quickSortAlgorithm(lowerBound,part-1);
        quickSortAlgorithm(part+1,upperBound);
    }
}

quickSortAlgorithm(lowerBound,upperBound);
console.log(`This is Sorted Using Quick Sort Aproach ${a}`);

