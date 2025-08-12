class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (!root) return true; // Empty tree is unival
        
        int val = root->val; // Store root value
        return dfs(root, val);
    }
    
    bool dfs(TreeNode* node, int val) {
        if (!node) return true;
        if (node->val != val) return false;
        
        // Check both subtrees
        return dfs(node->left, val) && dfs(node->right, val);
    }
};
