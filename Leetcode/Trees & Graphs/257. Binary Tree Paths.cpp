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
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> v;
        string s = "";
        preorder(v, s, root);
        return v;
    }

    void preorder(vector<string> &v, string s, TreeNode *root)
    {
        if (!root)
            return;
        s += to_string(root->val);
        s += "->";
        if (!root->left && !root->right)
        {
            s.pop_back();
            s.pop_back();
            v.push_back(s);
        }
        preorder(v, s, root->left);
        preorder(v, s, root->right);
    }
};