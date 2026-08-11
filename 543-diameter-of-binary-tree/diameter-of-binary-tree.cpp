class Solution {
public:
    int maxDia = 0;
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int leftAns=levels(root->left);
        int rightAns=levels(root->right);
        int ans=1+max(leftAns,rightAns);
        return ans;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return maxDia;

        int dia = levels(root->left) + levels(root->right);
        maxDia = max(maxDia, dia);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return maxDia;
    }
};