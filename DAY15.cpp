class Solution{
    public:
    
    vector<int> nodes;
    
    void inorder(Node* root)
    {
        if (root == NULL)
            return;
            
        inorder(root -> left);
        nodes.push_back(root -> data);
        inorder(root -> right);
    }
    
    Node* createBST(int low, int high)
    {
        if (low > high)
            return NULL;
        
        int mid = low + (high - low) / 2;
        
        Node* val = new Node(nodes[mid]);
        
        val -> left = createBST(low, mid-1);
        val -> right = createBST(mid+1, high);
        
        return val;
    }
    
    Node* buildBalancedTree(Node* root)
    {
        // Code here
        inorder(root);
        return createBST(0, nodes.size()-1);
    }
};
