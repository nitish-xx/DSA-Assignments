https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/879409699/

class Solution 
{
public:
    vector<int> v;

    void inorder(TreeNode* root)
    {
        if(root==nullptr)
    {
        return;
    }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }

    vector<int> inorderTraversal(TreeNode* root)
    {
        inorder(root);
        return v;    
    }
};
