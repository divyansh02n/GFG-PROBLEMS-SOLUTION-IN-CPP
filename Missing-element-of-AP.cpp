class Solution{   
public:
    int findMissing(int arr[], int n) {
        // code here
        
    int d = (arr[n - 1] - arr[0]) / n;
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        // Find the middle index
        int mid = low + (high - low) / 2;

        // if mid and the immediate next element to mid are not in AP, then missing element is arr[mid] + d.
        if (arr[mid + 1] - arr[mid] != d)
            return arr[mid] + d;

        // if mid and the immediate previous element to mid are not in AP, then missing element is arr[mid-1] + d.
        if (mid > 0 && arr[mid] - arr[mid - 1] != d)
            return arr[mid - 1] + d;

        // if elements of the left half are in AP, then missing element is in right half.
        if (arr[mid] == arr[0] + mid * d)
            low = mid + 1;

        // else missing element is in the left half.
        else
            high = mid - 1;
    }
    }

    // TIME COMPLEXITY ----> O(logn)
};
