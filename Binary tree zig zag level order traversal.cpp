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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int cnt=0;
    vector<vector<int>>ans;
    queue<TreeNode* >q;
    q.push(root);
    while(!q.empty()){
        cnt++;
        int size=q.size();
        vector<int>v;
        for(int i=0;i<size;i++){
            TreeNode* t = q.front();
            q.pop();
            v.push_back(t->val);
            if(t->left!=NULL)
            q.push(t->left);
            if(t->right!=NULL)
            q.push(t->right);
        }
    
        if(cnt%2==0){
            reverse(v.begin(),v.end());
        }
        ans.push_back(v);
    }
    return ans;
    }
};