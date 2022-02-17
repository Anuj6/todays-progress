/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        if(root==NULL)return v;
        stack<TreeNode*>s;
        
        TreeNode* curr=root;
        while(curr!=NULL or s.empty()==false){
            while(curr!=NULL){
                v.push_back(curr->val);
                s.push(curr);
                curr=curr->right;
            }
            // v.push_back(curr->right->val);
            curr=s.top();
            s.pop();
            curr=curr->left;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};