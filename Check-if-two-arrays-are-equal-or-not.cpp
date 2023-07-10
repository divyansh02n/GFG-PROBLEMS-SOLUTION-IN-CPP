
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        int i = 0, j = 0;
        
        while(i < A.size() && j < B.size()){
            if(A[i] != B[i]){
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};