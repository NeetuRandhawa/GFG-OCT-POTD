class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long sum = 0;
        for(int i=1;i<=N;i++){
            sum = sum + i*(N/i);
        }
        return sum;
    
    }
};