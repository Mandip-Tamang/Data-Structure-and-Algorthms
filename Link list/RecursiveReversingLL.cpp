#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{   //creating class for all nodes 
public:
int data;     //stores value of node 
node* next;   //stores address of next node
node* prev;   //stores address of next node
node(int data)   
{
   
    this->data=data;    //assign the created node with given value 
    this->next=NULL;    //point it to null value first
    this->prev=NULL;    //point it to null value first
}
};
int GetLength(node* &head)   //Function to return Length of LinkList
{  int len=0;
     node* temp=head;
  while(temp!=NULL)
{
  len++;   
  temp=temp->next;       
}
return len;
}
void InsertAtHead(node* &head,node* &tail ,int d)
{
    if(head==NULL)
    {
        node* temp=new node(d);
        head=temp;
        tail=temp;
    }
    else 
    {
    node* temp=new node(d);
    temp->next=head;
    head=temp;
    }
}
void reverse(node* &head,node* prev,node *curr)
{
    if(curr==NULL)
    {
      head=prev;
    return;
    }
    reverse(head,curr,curr->next);
    curr->next=prev;
}
void reverseLL(node* &head,node* &tail)
{
    if(head==NULL || head->next==NULL)
    {
        cout<<"Can't Reverse";
        return;
    }
    else
    {
    node* prev=NULL;
    node* curr=head;
    reverse(head,prev,curr);
    }
}
int main(){
   node* head=NULL;
   node* tail=NULL;
   for (int i = 0; i < 6; i++)
   {
    InsertAtHead(head,tail,i);
   }
  //  PrintLinkList(head);
  cout<<"head="<<head->data;
  cout<<endl;
   reverseLL(head,tail);
  //  PrintLinkList(head);
  cout<<"head="<<head->data;


return 0;
}