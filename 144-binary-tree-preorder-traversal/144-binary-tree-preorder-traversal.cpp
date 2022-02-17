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
    vector<int> preorderTraversal(TreeNode* root) {
        // iterative
        stack<TreeNode*> s;
        vector<int>v;
        if(root==NULL)return v;
        //create a temporory node of use root node both will work
        TreeNode* curr=root;
        while(s.empty()==false or curr!=NULL){
            
            while(curr!=NULL){
                v.push_back(curr->val);
                s.push(curr);
                curr=curr->left;
            }
            //now pop and set curr to right
            curr=s.top();
            s.pop();
            curr=curr->right;
        }
        return v;
    }
};