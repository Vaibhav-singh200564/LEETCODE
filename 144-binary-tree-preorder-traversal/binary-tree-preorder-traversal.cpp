class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }

    void preorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;
        ans.push_back(root->val);         // Visit root
        preorder(root->left, ans);        // Traverse left
        preorder(root->right, ans);       // Traverse right
    }
};
