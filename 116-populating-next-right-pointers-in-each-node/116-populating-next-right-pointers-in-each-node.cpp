/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        // level order traversal krna h babu
        if(root==NULL){return NULL;}
        queue<Node*> q;
        q.push(root);
        
        while(q.empty()==false){
            int len=q.size();
            vector<Node*>v;
            for(int i=0; i<len; i++){
                Node* temp=q.front();
                q.pop();
                if(temp->left){q.push(temp->left);}
                if(temp->right){q.push(temp->right);}
                v.push_back(temp);
                
            }
            for(auto i=0; i<v.size()-1; i++){
                v[i]->next=v[i+1];
            }
            v[v.size()-1]->next=NULL;
            // ans.push_back(v);
        }
        return root;
    }
};