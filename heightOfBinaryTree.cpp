#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int key;
    node* left;
    node* right;
    node(int val){
        key = val;
        left = NULL;
        right = NULL;
    }
};

int height(node* root){
    if(root == NULL){
        return 0;
    }else{
        return max(height(root->left), height(root->right))+1;
    }
}

int main()
{
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);

    cout << endl;
    cout << height(root) << endl;
    return 0;
}