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
    TreeNode* recur(vector<int> &nums, int L, int R){
        if(L>R){
            return NULL;
        }
        int mid=(L+R)/2;
        // int mid=L+(R-L)/2;
        
        TreeNode *node=new TreeNode(nums[mid]);
        node->left=recur(nums,L,mid-1);
        node->right=recur(nums,mid+1,R);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        TreeNode *root=recur(nums,0,n-1);
        return root;
    }
};