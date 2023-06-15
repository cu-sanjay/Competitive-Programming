class Solution {
public:
    int maxLevelSum(TreeNode* root) {
          int ans = -1;
          int lvl = 0;
          int maxSum = INT_MIN;
          queue<TreeNode*> q;
          q.push(root);
          while(!q.empty()){  
            lvl++;
            int size = q.size();
            int temp = 0;
            for(int i=0;i<size;i++){
            TreeNode* node = q.front();
            q.pop();
            temp += node->val;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right); 
            }
            if(temp > maxSum){
                ans = lvl;
                maxSum = temp;
            }
        }
        return ans;
    }
};
