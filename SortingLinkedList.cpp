#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node*  &head, int val){
    node* n = new node(val);
    n->next=head;
    head = n;
    return;
}

void insertAtTail(node*  &head, int val){
    node* n = new node(val);
    node* temp = head;
    if(head==NULL){
        insertAtHead(head,val);
    }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout << "NULL";
    cout<< endl;
}

void sort(node* &head, int c){
    node* a = head;
    while(c!=0){
        node* i = a;
        node* j = a->next;
        while(j!=NULL){
            if(i->data > j->data){
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
            // cout << "i is " << i->data << " and j is "<< j->data << endl;
            i=i->next;
            j=j->next;
        }
        c--;
    }
}
int count(node* head){
    node* temp = head;
    int c = 0;
    while(temp->next!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
}

int main()
{
    node* head=NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,40);
    insertAtTail(head,30);
    insertAtTail(head,50);
    insertAtTail(head,70);
    insertAtTail(head,60);
    display(head);
    int c = count(head);
    sort(head, c);
    display(head);
    
    return 0;
}