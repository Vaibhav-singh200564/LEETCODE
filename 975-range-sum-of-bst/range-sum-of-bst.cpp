class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (!root) return 0;

        // If value is smaller than low, skip left subtree
        if (root->val < low) 
            return rangeSumBST(root->right, low, high);

        // If value is bigger than high, skip right subtree
        if (root->val > high)
            return rangeSumBST(root->left, low, high);

        // Value in range: add and explore both sides
        return root->val 
               + rangeSumBST(root->left, low, high) 
               + rangeSumBST(root->right, low, high);
    }
};
