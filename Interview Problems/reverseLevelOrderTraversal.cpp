/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> reverseLevelOrder(TreeNode<int> *root)
{
    // Write your code here.

    queue<TreeNode<int> *> q;
    if (root) // if root exists
        q.push(root);
    vector<int> v;

    while (!q.empty())
    {
        // pop operation
        TreeNode<int> *node = q.front();
        q.pop();

        // other operations
        v.push_back(node->val);

        // pushing value
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }

    // reversing the vector
    vector<int> reversed_v(v.rbegin(), v.rend());

    return reversed_v;
}
