class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        if((n/static_cast<int>(pow(2,k)))%2==1) { 
            return true;
        }return false;
    }
};
