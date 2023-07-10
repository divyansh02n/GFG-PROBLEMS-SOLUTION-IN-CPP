class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<N;i++)
        {
            if(A[i]==0)
            {
                cnt1++;
                
            }
            else if(A[i]==1)
            {
                cnt2++;
            }
        }
        
        for(int i=0;i<cnt1;i++)
        
        {
            A[i]=0;
            
        }
        for(int i=cnt1;i<N;i++)
        {
            A[i]=1;
        }
        
    }
};