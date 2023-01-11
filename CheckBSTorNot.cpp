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

void check(node* root, vector<int> &vec){
    if(root==NULL){
        return;
    }
    check(root->left, vec);
    // cout << root->key << " ";
    vec.push_back(root->key);
    check(root->right, vec);
}

bool checkIt(vector<int> vec){
    int i = 0;
    while(i<vec.size()-1){
        if(vec[i]>vec[i+1]){
            return false;
        }
        i++;
    }
    return true;
}

int main()
{
    node* root = new node(8);
    root->left = new node(3);
    root->right = new node(10);
    root->left->left = new node(1);
    root->left->right = new node(5);
    root->right->left = new node(9);
    root->right->right = new node(11);
    // root->right->right->left = new node(80);
    vector<int> vec;

    check(root, vec);
    for (int j = 0; j < vec.size(); j++){
        cout << vec[j] << " ";
    }
    cout << endl;
    cout << checkIt(vec);
}