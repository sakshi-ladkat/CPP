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
class Solution
{
public:
    void inorder(TreeNode *root, vector<vector<int>> &myReturn, vector<int> currentVector, const int &targetSum, int currentSum)
    {
        if (root == NULL)
            return;
        currentVector.push_back(root->val);
        currentSum += root->val;
        if (root->right == NULL && root->left == NULL)
        {
            if (currentSum == targetSum)
            {
                myReturn.push_back(currentVector);
            }
            return;
        }
        if (root->left)
            inorder(root->left, myReturn, currentVector, targetSum, currentSum);

        if (root->right)
            inorder(root->right, myReturn, currentVector, targetSum, currentSum);
    }

    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<vector<int>> myReturn;
        inorder(root, myReturn, {}, targetSum, 0);

        return myReturn;
    }
};