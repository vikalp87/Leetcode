class Solution {
public:
    struct Info {
        bool isBST;
        int sum;
        int minVal;
        int maxVal;

        Info(bool isBST, int sum, int minVal, int maxVal)
            : isBST(isBST), sum(sum), minVal(minVal), maxVal(maxVal) {}
    };

    Info helper(TreeNode* root, int& maxSum) {
        if (!root) {
            return Info(true, 0, INT_MAX, INT_MIN);
        }

        Info left = helper(root->left, maxSum);
        Info right = helper(root->right, maxSum);

        if (left.isBST && right.isBST &&
            root->val > left.maxVal && root->val < right.minVal) {

            int currSum = root->val + left.sum + right.sum;
            maxSum = max(maxSum, currSum);

            return Info(true,
                        currSum,
                        min(root->val, left.minVal),
                        max(root->val, right.maxVal));
        }

        return Info(false, 0, INT_MAX, INT_MIN);  
    }

    int maxSumBST(TreeNode* root) {
        int maxSum = 0;
        helper(root, maxSum);
        return maxSum;
    }
};
