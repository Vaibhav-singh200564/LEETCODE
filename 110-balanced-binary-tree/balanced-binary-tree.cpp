class Solution {
public:
    // Helper function that returns the height if balanced, or -1 if unbalanced
    int check(TreeNode* root) {
        if (!root) return 0;

        int left = check(root->left);
        if (left == -1) return -1;

        int right = check(root->right);
        if (right == -1) return -1;

        if (abs(left - right) > 1) return -1;

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        return check(root) != -1;
    }
};
