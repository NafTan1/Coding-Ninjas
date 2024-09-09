/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> v;
void postorder(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    v.push_back(root->data);
}
vector<int> postOrder(TreeNode<int> *root)
{
    // Write your code here.
    postorder(root);
    return v;
}
