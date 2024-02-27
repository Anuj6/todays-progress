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
    int diameterOfBinaryTree(TreeNode* root) {
        int result=INT_MIN;
        solve (root, result);
        return result-1;
    }
    
    int solve(TreeNode* root, int& result){
        // base condition
        if(root==NULL){
            return 0;
        }
        // hypothesis never question this part
        int left=solve(root->left, result);
        int right=solve(root->right, result);
        // induction some calculation
        int temp=max(left, right)+1;
        int ans=max(left+right+1, temp);
        result=max(ans,result);
        return temp;
    }
};