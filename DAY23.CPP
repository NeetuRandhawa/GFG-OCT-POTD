class Solution{
	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int ans=0;
	    vector<int> dp(n);
	    for(int i=n-1;i>=0;i--){
	        int s=0;
	        for(int j=i+1;j<n;j++){
	            if(arr[j]>arr[i]) s=max(s,dp[j]);
	        }
	        dp[i]=arr[i]+s;
	        ans=max(ans, dp[i]);
	    }
	    return ans;
	}  
};
