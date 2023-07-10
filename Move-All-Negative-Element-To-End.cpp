class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> arr1;
        
        for(int i=0; i<n; i++){
            if(arr[i] > 0){
                arr1.push_back(arr[i]);
            }
        }
        
        for(int i=0; i<n; i++){
            if(arr[i] < 0){
                arr1.push_back(arr[i]);
            }
        }
        
        for(int i=0;i<n;i++){
            arr[i]=arr1[i];
        }
    }
};