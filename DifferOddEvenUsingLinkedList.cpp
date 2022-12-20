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

int deleteHead(node* &head){
    int v=0;
    node* temp = head;
    v=head->data;
    head=head->next;
    // delete temp;
    return v;
}

int deleteMid(node* &head, int pos){
    node* temp = head;
    if(pos==0){
        return deleteHead(head);
    }
    int count=0;
    int v=0;
    while(temp!=NULL && count!=pos-1){
        temp=temp->next;
        count++;
    }
    v=temp->next->data;
    temp->next=temp->next->next;
    // delete temp;
    return v;
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


void check(node* &head, int n){
    node* temp= head;
    int count=0;
    while(temp!= NULL && n--){
        
        int m=deleteMid(head,count);
        if((m %2) ==0){
            insertAtHead(head,m);
        }
        else{
            insertAtTail(head, m);
        }
        temp= temp-> next;
        count++;
        
    }
    
}



int main()
{
    node* head=NULL;
    insertAtHead(head,10);
    insertAtHead(head,23);
    insertAtHead(head,44);
    insertAtTail(head,47);
    insertAtTail(head,51);
    insertAtTail(head,60);
    display(head);
    cout<<endl;
    check(head,6);
    display(head);
    return 0;
}