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
void InsertAtTail(node* &tail,node* &head,int d)
{
  if(tail==NULL)
  {
    node* temp=new node(d);
    tail=temp;
    head=temp;
  }
  else
  {
    node* temp=new node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
  }
}
void InsertNodeAtPosition(int position,int d,node* &head,node* &tail)  
{
      //creating the node that is to be inserted
    int count=1;
    node* temp=head;
     if(position==1)
     {
         InsertAtHead(head,tail,d);
         return;
     }
    while(count!=position-1)
    {
        temp=temp->next;
        count++;

    }
        if(temp->next==NULL)
    {
        InsertAtTail(tail,head,d);
        return;
    }
    node* InsertNode=new node(d);
   InsertNode->next=temp->next;
   temp->next->prev=InsertNode;
   temp->next=InsertNode;
   InsertNode->prev=temp;
 }
void PrintLinkList(node *&head)  //Function to print  Linklist
{
  node* temp=head;
  while(temp!=NULL)
{
  cout<<temp->data<<"->";   //print value of node pointed by temp
  temp=temp->next;        //Moving temp to next node 
}
cout<<endl;
}
int main(){
   node* head=NULL;
   node* tail=NULL;
//    cout<<GetLength(head);
//    cout<<endl;
   InsertAtHead(head,tail,3);
   PrintLinkList(head);
   cout<<"head="<<head->data<<endl;
   cout<<"tail="<<tail->data<<endl;
   InsertAtTail(tail,head,2);
   PrintLinkList(head);
   cout<<"head="<<head->data<<endl;
   cout<<"tail="<<tail->data<<endl;
   InsertAtHead(head,tail,7);
   PrintLinkList(head);
   cout<<"head="<<head->data<<endl;
   cout<<"tail="<<tail->data<<endl;
   InsertAtHead(head,tail,0);
   PrintLinkList(head);
   cout<<"head="<<head->data<<endl;
   cout<<"tail="<<tail->data<<endl;
   InsertNodeAtPosition(5,24,head,tail);
   cout<<"head="<<head->data<<endl;
   cout<<"tail="<<tail->data<<endl;
   PrintLinkList(head);
   cout<<"head="<<head->data<<endl;
   cout<<"tail="<<tail->data<<endl;

return 0;
}