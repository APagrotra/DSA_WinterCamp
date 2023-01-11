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

void leafNode(node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    leafNode(root->left, count);
    leafNode(root->right, count);
}
void NonleafNode(node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left != NULL && root->right != NULL)
    {
        count++;
    }
    NonleafNode(root->left, count);
    NonleafNode(root->right, count);
}


int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);

    
    int count = 0;
    int count2 = 0;
    leafNode(root, count);
    NonleafNode(root, count2);
    cout << count << " " << count2;
    return 0;
}