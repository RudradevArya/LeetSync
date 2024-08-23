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
    int recur(TreeNode* root, int start, int &maxT){
        if(!root){
            return -1;
        }

        if(root->val == start){
            int Ldep = maxD(root->left);
            int Rdep = maxD(root->right);

            maxT = max(Ldep, Rdep);
            return 1;
        }

        int Ldist = recur(root->left, start, maxT);
        int Rdist = recur(root->right, start, maxT);

        if(Ldist != -1){
            int Rdep = maxD(root->right);

            maxT = max(maxT , Ldist + Rdep);
            return Ldist + 1;
        }
        if(Rdist != -1){
            int Ldep = maxD(root->left);

            maxT = max(maxT , Rdist + Ldep);
            return Rdist + 1;
        }
        return -1;

    }
    int maxD(TreeNode* root){
        if(!root){
            return 0;
        }
        return 1 + max(maxD(root->left), maxD(root->right)); 
    }

    int amountOfTime(TreeNode* root, int start) {
        int maxT = 0;
        recur(root, start, maxT);
        return maxT;
    }
};