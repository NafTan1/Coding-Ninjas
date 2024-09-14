#include <bits/stdc++.h>
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/
long long sum = 0;
void summation(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    if (root->left)
        sum += root->left->data;
    summation(root->left);
    summation(root->right);
}

long long leftSum(BinaryTreeNode<int> *root)
{
    // Write your code here.
    sum = 0;
    summation(root);
    return sum;
}