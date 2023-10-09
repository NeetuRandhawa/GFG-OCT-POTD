//Height of Binary Tree

class Solution{
    public:
     int data;
    struct Node* left;
    struct Node* right;
    
    
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        
        if(node==NULL){
            return 0;
        }

//recursive function to calculate max height between the left and  right node and adding 1 for the current node itself 
        return 1 + max(height(node->left), height(node->right));
    }
};
