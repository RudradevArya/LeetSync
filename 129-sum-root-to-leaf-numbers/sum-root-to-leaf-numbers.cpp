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
    void tree_sum(TreeNode *node, string s, int &sum){
        if(node == NULL){
            return;
        }

        s += to_string(node->val);

        if(node->left==NULL && node->right==NULL ){
            sum += stoi(s);
        }else{
            tree_sum(node->left,s,sum);
            tree_sum(node->right,s,sum);
        }
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        tree_sum(root,"", sum);
        return sum;
    }
};