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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // simple bfs ka question ho skta tha ye 
        // but isme you will need a level ending indicator other wise poora ek hi line print ho jaega
        vector<vector<int>>ans;
        
        // I will indicate the level end with a null pointer
        queue<TreeNode*> q;
        q.push(root);
        // I just realised that level indicator apn ko graph me lagega bas
        if(root==NULL)
            return {};
        while(q.empty()==false){
            int len=q.size();
            vector<int>v;
            for(int i=0; i<len; i++){

                //now push the top elements children
                TreeNode* temp=q.front();
                q.pop();
                //push the value to the vector
                v.push_back(temp->val);
                if(temp->left){q.push(temp->left);}
                if(temp->right){q.push(temp->right);}
            
                //suppose we find that our top elemtn is NULL
            }            
            ans.push_back(v);
        }
        
        return ans;    
    }
    
};