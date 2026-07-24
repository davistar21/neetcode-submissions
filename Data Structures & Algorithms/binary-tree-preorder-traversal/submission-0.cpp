
class Solution {
private:
    void traverse(TreeNode* current, vector<int>& result) {
        if (current == nullptr) return;
        result.push_back(current->val);
        traverse(current->left, result);
        traverse(current->right, result);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};