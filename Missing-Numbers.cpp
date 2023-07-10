int missingNumber(int A[], int N)
{
    // Your code goes here
    int sum = 0;
    
    for(int i=0; i<N-1; i++){
        sum += A[i];
    }
    
    int actual_sum = (N*(N+1))/2;
    return actual_sum - sum;
}