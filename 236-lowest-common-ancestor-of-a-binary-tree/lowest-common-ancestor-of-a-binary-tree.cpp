class Solution {
public:
    bool exist(TreeNode* root, TreeNode* target) {
        if (root == NULL) return false;  // corrected: return false not root
        if (root == target) return true; // corrected: return true not false
        return exist(root->left, target) || exist(root->right, target);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (exist(root->left, p) && exist(root->left, q))
            return lowestCommonAncestor(root->left, p, q);
        else if (exist(root->right, p) && exist(root->right, q))
            return lowestCommonAncestor(root->right, p, q);
        return root;
    }
};
