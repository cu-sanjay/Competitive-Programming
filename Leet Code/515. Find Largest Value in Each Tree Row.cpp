class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;

        if (!root) {
            return res;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int max_val = INT_MIN;
            int levelSize = q.size();

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                max_val = max(max_val, node->val);

                if (node->left) {
                    q.push(node->left);
                }

                if (node->right) {
                    q.push(node->right);
                }
            }

            res.push_back(max_val);
        }

        return res;        
    }
};
