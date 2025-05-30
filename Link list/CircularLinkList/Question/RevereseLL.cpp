#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

void reverseLL(node* &head,node* &tail)
{
    node* prev=head;
    node* curr=head->next;
    while (curr!=NULL)
    {
        node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    tail=head;
    head=prev;
    tail=NULL;
}
int main(){
    
return 0;
}