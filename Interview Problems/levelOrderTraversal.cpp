#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> v;

void level_order(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {

        BinaryTreeNode<int> *x = q.front();
        q.pop();

        v.push_back(x->val);

        if (x->left)
            q.push(x->left);
        if (x->right)
            q.push(x->right);
    }
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    v.clear();
    level_order(root);
    return v;
}