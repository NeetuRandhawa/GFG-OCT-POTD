class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
   
        //  Your Code here
        int height(Node *root)
    {
        if(root == NULL) return 0;
        return max(height(root -> left), height(root -> right)) + 1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here 
        if(root == NULL) return true;

        if(isBalanced(root -> left) && isBalanced(root -> right))
        {
            if(abs(height(root -> left) - height(root -> right)) <= 1) return true;
        }
        
        return false;
    
    }
};
