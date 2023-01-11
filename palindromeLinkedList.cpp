#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
    return;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}

void isPalindrome(node* head){
    node* temp = head;
    stack<int> s;
    while(temp!=NULL){
        cout << "inside while loop" << endl;
        cout << temp->data << endl;
        if(s.top()!=temp->data){
            cout << "if statement" << endl;
            s.push(temp->data);
            // cout << s.top() << endl;
        }else{
            cout << "if statement" << endl;
            s.pop();
        }
        temp=temp->next;
    }
    if(s.empty()==true){
        cout<<"It is palindrome"<<endl;
    }else{
        cout<<"Its not a palindrome"<<endl;
    }
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 30);
    insertAtTail(head, 20);
    insertAtTail(head, 10);
    display(head);
    isPalindrome(head);

    return 0;
}