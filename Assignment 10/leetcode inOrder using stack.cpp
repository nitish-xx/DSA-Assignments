https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
     vector<int>Inorder(TreeNode*root){
         vector<int>ans;
         stack<TreeNode*>S;
            if(root) S.push(root);

           while(!S.empty()){
             TreeNode*temp= S.top();
             if(temp->left){
             S.push(temp->left);
             temp->left=NULL;
    }
     else{
         ans.push_back(temp->val);
         S.top();
         if(temp->right)
         S.push(temp->right);

     }
     
} 
        return ans;
     }
     
       
};
