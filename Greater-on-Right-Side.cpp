class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    // code here
	    int temp;
	    int maxi = -1;
	    for(int i=n-1; i>=0; i--){
	        temp = arr[i];
	        arr[i] = maxi;
	        if(temp > maxi){
	            maxi = temp;
	        }
	    }
	}


};