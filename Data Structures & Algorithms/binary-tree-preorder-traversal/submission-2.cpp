
class Solution {

public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st;
        TreeNode* current = root;

        while (!st.empty() || current != nullptr) {
            if (current != nullptr) {
                result.push_back(current->val);
                if (current->right) {
                    st.push(current->right);
                } 

                current = current->left;
                
            } else {
                current = st.top();
                st.pop();
                
            }
        }

        return result;
    }
};