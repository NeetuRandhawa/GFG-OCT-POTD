class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    	//Complete the function
    	long long ans = 0;
        long long count1;
        long long count0;
        for(int i=0;i<31;i++){
            count1=0;
            count0=0;
            for(int j=0;j<n;j++){
                if(arr[j]&(1<<i))count0++;
                else{
                    count1++;
                }
            }
            long long s = count1*count0;
            ans+=(1<<i)*s;
        }
        return ans;
    }
};
