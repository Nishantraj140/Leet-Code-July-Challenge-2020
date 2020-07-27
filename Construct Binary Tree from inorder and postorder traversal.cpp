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
    int poindex;
    
    int findroot(vector<int>&inorder, int val, int start, int end){
        for(int i=start;i<=end;i++){
            if(inorder[i]==val)
                return i;
        }
        return -1;
    }
    
    TreeNode* helper(vector<int> &inorder, vector<int> &postorder, int start, int end){
        if(start>end)
            return NULL;
        int ioindex=findroot(inorder,postorder[poindex],start,end);
        
        TreeNode * node = new TreeNode(postorder[poindex--]);
        node->right = helper(inorder,postorder,ioindex+1,end);
        node->left = helper(inorder,postorder,start,ioindex-1);
        return node;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        poindex=postorder.size()-1;
        return helper(inorder,postorder,0,poindex);
    }
};