#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int key;
    node *left;
    node *right;
    node(int val)
    {
        key = val;
        left = NULL;
        right = NULL;
    }
};

int MaxEle(node *root)
{
    // if(!root)return 0;
    // int left=MaxEle(root->left);
    // int right=MaxEle(root->right);
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return max(root->key, max(MaxEle(root->left), MaxEle(root->right)));
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->left->left = new node(30);
    root->right = new node(40);
    root->right->left = new node(50);
    cout << "Execute" << endl;
    cout << "Max element is " << MaxEle(root) << endl;
    return 0;
}