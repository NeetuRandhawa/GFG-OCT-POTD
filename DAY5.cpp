//Count number of substrings
class Solution
{
  public:
long long int solve(string s, int k)
    {
        int n = s.size();
        int freq[26] = {0};
        int dist_cnt = 0;
        long long int ans = 0;  //ans count
        
        int i=0;  //start of window
        int j=0;  //end of window
        while(j<n)
        {
            freq[s[j]-'a']++;
            if(freq[s[j]-'a'] == 1)
                dist_cnt++;
            
            //Decreasing the size of window
            while(dist_cnt > k)
            {
                freq[s[i]-'a']--;
                if(freq[s[i]-'a'] == 0)
                    dist_cnt--;
                i++;
            }
            j++;
            ans += (j-i+1);
        }
        return ans;
    }
    
    
    long long int substrCount(string s, int k) 
    {
        long long int ans = solve(s,k) - solve(s,k-1);
        return ans;
    }
};
