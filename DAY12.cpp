//Duplicate subtree in Binary Tree

class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    vector<int> f(Node*root,vector<int>temp,map<vector<int>,int>&mp){
        // if(!root)return {} ;
        vector<int>left ;
        vector<int>right ;
        if(root->left){
            left= f(root->left,temp,mp) ;
        }
        if(root->right){
            right=f(root->right,temp,mp) ;
        }
        for(auto it:left)temp.push_back(it) ;
        temp.push_back(root->data) ;
        for(auto it:right)temp.push_back(it) ;
        if(root->left or root->right){
            mp[temp]++ ;
        }
        // for(auto it:temp)cout << it << " " ;
        // cout << endl ;
        return temp ;
    }
    int dupSub(Node *root) {
         // code here
         vector<int>temp ;
         map<vector<int> , int>mp ;
         f(root,temp , mp) ;
         for(auto it:mp){
             if(it.second>=2)return true ;
         }
         return false ;
    }


};
