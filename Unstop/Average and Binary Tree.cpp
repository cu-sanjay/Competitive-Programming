#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
  int val;
  TreeNode *left, *right;
  TreeNode(int x){
    val = x;
    left = right = NULL;
  }
};

TreeNode* makeTree(int idx, int n, int arr[]){
  if(idx >= n || arr[idx] == -1)    return NULL;
  TreeNode *root = new TreeNode(arr[idx]);
  root->left = makeTree(2*idx+1, n, arr);
  root->right = makeTree(2*idx+2, n, arr);
  return root;
}

int main() {

    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    TreeNode *root = makeTree(0, n, arr);
  
    vector<double> vt;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
    int n = q.size(), i = 0;
    double avg = 0;
    for(int i = 0; i < n; i++){
        TreeNode *x = q.front();
        q.pop();
        avg += x->val;
        if(x->left)  q.push(x->left);
        if(x->right) q.push(x->right);
    }
    avg /= n;
    vt.push_back(avg);
    }

    for(auto x : vt)
        cout << x << " ";
    cout << "\n";
  
  return 0;
}