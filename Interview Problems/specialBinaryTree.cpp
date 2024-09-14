#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

/*Solution 1*/

bool x = true;
void special(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    if (root->left != NULL && root->right == NULL)
    {
        x = false;
    }
    else if (root->left == NULL && root->right != NULL)
    {
        x = false;
    }
    special(root->left);
    special(root->right);
}

bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
    // Write your code here.
    x = true;
    special(root);
    return x;
}

/*Solution 2*/

bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
    // Write your code here.
    if (root->left == NULL && root->right == NULL)
        return true;
    if (root->left == NULL || root->right == NULL)
        return false;

    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);
    if (l == false || r == false)
        return false;
    return true;
}