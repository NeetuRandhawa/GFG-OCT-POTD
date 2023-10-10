//Nodes at given distance in binary tree
class Solution
{
private:
    void search(Node *root, int x, Node* &ptr){
        if (root==nullptr) return ;
        if (root->data == x) {ptr=root; return;}
        if (root->left != nullptr) search(root->left, x, ptr);
        if (root->right != nullptr) search(root->right, x, ptr);
    }
    void whos_ur_daddy(Node *root, Node *parent, map<Node *, Node *> &mp){
        mp[root] = parent;
        if (root->left != nullptr) whos_ur_daddy(root->left, root, mp);
        if (root->right!= nullptr) whos_ur_daddy(root->right, root, mp);
        
    }
public:
    void lets_do_it(Node *root, int k, int &t, vector<int> &v){
        if (root == nullptr) return ;
        if (t==k) {v.push_back(root->data); return ;}
        t++;
        if (root->left!=nullptr) lets_do_it(root->left, k, t, v);
        if (root->right!=nullptr) lets_do_it(root->right, k, t, v);
        t--;
    }
    void lets_do_it_again(Node *root, Node *child, int k, int &t, vector<int> &v){
        if (root == nullptr){cout<<"exit"; return ;}
        if (t==k) {v.push_back(root->data); return ;}
        t++;
        if (root->left!=nullptr and root->left != child) lets_do_it_again(root->left, child, k, t, v);
        if (root->right!=nullptr and root->right != child) lets_do_it_again(root->right, child, k, t, v);
        t--;
    }
    vector<int> KDistanceNodes(Node* root, int target , int k)
    {
        vector<int> v;
        vector<Node*> a;
        Node *head = root;
        Node *ptr = root;
        search(root, target, ptr);
        int t=0;
        Node *ptr1 = ptr;
        lets_do_it(ptr1, k, t, v);
        map<Node *, Node *> mp;
        whos_ur_daddy(root, nullptr, mp);
        while(1){
            t=0;
            k--;
            if (t<=k and ptr!=root){
                lets_do_it_again(mp[ptr], ptr, k,t, v);
                ptr = mp[ptr];
            }
            else break;
        }
        sort(v.begin(), v.end());
        return v;
    }
};
