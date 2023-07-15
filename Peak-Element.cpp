class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int greatest = INT_MIN;
       for(int i=0; i<n; i++){
           if(arr[i] > greatest){
               greatest = arr[i];
           }
       }
       for(int i =0;i<n;i++)
       {
           if(arr[i] == greatest)
           {
               return i;
           }
       }
    }
};