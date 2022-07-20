class Solution {
public:
    vector<vector<int>> sums;
    void dfs(TreeNode* node, vector<int> a){
        a.push_back(node->val);
        if(node->left) dfs(node->left, a);
        if(node->right) dfs(node->right, a);
        if(!node->left && !node->right) sums.push_back(a);
        return;
    }
    int sumNumbers(TreeNode* root) {
        dfs(root, vector<int>());
        int ans = 0;
        for(auto x : sums){
            int pwr = 0;
            int sum = 0;
            for(int i = x.size()-1; i >= 0; i--){
                sum+= x[i]*pow(10, pwr);
                pwr++;
            }
            ans+= sum;
        }
        return ans;
    }
};
