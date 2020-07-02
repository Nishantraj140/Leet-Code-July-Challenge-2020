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
    
    void bfs(TreeNode* root, vector<vector<int> > &ans){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>levels;
            int n=q.size();
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                levels.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            ans.push_back(levels);
        }
    }
    
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > ans;
        if(root==NULL)
            return ans;
        bfs(root,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};