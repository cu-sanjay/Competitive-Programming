#include <bits/stdc++.h> 
void helper(TreeNode<int> *&root,int &sum) {
    if(!root) {
        return;
    }
    helper(root->right,sum);
    int tmp=root->val;
    root->val=sum;
    sum+=tmp;
    helper(root->left,sum);
}
TreeNode<int> *convertBstToGreaterSum(TreeNode<int> *root) {
    if(!root) {
        return root;
    }
    int sum=0;
    helper(root,sum);
    return root;
}
