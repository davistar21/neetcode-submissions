/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<int> fakeSt;
        stack<TreeNode*> st;
        TreeNode* current = root;
        while (current != nullptr || !st.empty()) {
            if (current != nullptr) {
               fakeSt.push(current->val);
               if (current->left) {                
                st.push(current->left);
               }
               current = current->right;
            } else {
                current = st.top();
                st.pop();

            }
        }
        while (!fakeSt.empty()) {
            result.push_back(fakeSt.top());
            fakeSt.pop();
        }
        return result;
    }
};