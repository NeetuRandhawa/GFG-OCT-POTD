//Floor in BST
class Solution{

public:
    int floor(Node* root, int x) {
        // Code here
        Node* temp=root;
        int ans=INT_MIN;
        while(temp){
            if(temp->data == x){return x;}
            if(temp->data < x && temp->data > ans){
                ans=temp->data;
            }
            if(x < temp->data){
                temp=temp->left;
            }
            else{
                temp=temp->right;
            }
        }
        return ans != INT_MIN ? ans : -1;
    }
};
