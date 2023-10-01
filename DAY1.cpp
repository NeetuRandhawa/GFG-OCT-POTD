Boundary traversal of matrix
class Solution
{   
    public:
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>ans;
        int top=0,bottom=n-1,left=0,right=m-1;
        for(int j=0;j<m;j++){
            ans.push_back(matrix[top][j]);
        }
        top++;
        for(int i=top;i<n;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int j=right;j>=0;j--){
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>0;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        
        return ans;
    }
};
