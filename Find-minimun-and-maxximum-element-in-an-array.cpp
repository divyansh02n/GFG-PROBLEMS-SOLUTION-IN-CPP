
pair<long long, long long> getMinMax(long long a[], int n) {
    int max=a[0];
    int min=a[0];
    
    for(int i=0; i<n; i++){
        if(a[i] < min ){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }
    return{min,max};

    // Time Complexity ---> O(n)
}
