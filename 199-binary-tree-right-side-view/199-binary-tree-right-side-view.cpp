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
    vector<int> rightSideView(TreeNode* root) {
        
        
        vector<int>ans;
        if(root==NULL)return {};
        queue<TreeNode*>q;
        
        q.push(root);
        while(q.empty()==false){
            int len=q.size();
          
            for(int i=0; i<len; i++){
                
                TreeNode* temp=q.front();
                q.pop();
                
                if(temp->left){q.push(temp->left);}
                if(temp->right){q.push(temp->right);}
                //now if i==n-1 we can push it out answer stack
                if(i==len-1){
                    ans.push_back(temp->val);
                }
            }
            
        }
        return ans;
    }
};