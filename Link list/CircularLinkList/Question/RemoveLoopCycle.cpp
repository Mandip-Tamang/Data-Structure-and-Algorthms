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
node* FloydCycleDetect(node * head) {    //This algortihm return the node pointer where the fast and slow pointer meet
  if(head==NULL)
    return NULL;
  node* fast=head;
  node* slow=head;
  while(fast->next!=NULL && slow->next!=NULL)
    {
      fast=fast->next;
      if(fast->next!=NULL)
        fast=fast->next;
      slow=slow->next;
    if(fast==slow)
    {
      return slow;
    }
    }
      return NULL;
}
node* getFirstElement(node* head)   //This Element return the  node pointer that is first element to loop or cycle
{
  if(head==NULL)
    return NULL;
  node* crossPoint=FloydCycleDetect(head);
  node* slow = head;
  while(slow!=crossPoint)
    {
      slow=slow->next;
      crossPoint=crossPoint->next;
    }
  return slow;
}
void RemoveCycle(node* head)   //this function removes the loop by pointing the previous element of getELement()to null 
{
    node* start=getFirstElement(head);
    node* prev=start;
    while(prev->next!=start)
    prev=prev->next;
    prev->next=NULL;
    cout<<endl<<"Loop removed ";
}
int main(){
   node* head=NULL;
   node* tail=NULL;
   for (int i = 0; i < 6; i++)
   {
    InsertAtHead(head,tail,i);
   }
   PrintLinkList(head);
   tail->next=head->next;
   cout<<"Starting Loop Element=";
   cout<<getFirstElement(head)->data;
   RemoveCycle(head);
   PrintLinkList(head);
return 0;
}