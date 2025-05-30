#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{   //creating class for all nodes 
public:
int data;     //stores value of node 
node* next;   //stores address of next node
node(int data)   
{
   
    this->data=data;    //assign the created node with given value 
    this->next=NULL;    //point it to null value first
}
};
void InsertNodeAtHead(node* &head,int d)  
{
    node* node2=new node(d);  //creating the node that is to be inserted
  node2->next=head;    
  head=node2;       //pointing head to inserted element
  node2=head; 

}
void InsertNodeAtEnd(node* &tail,int d)  
{
    node* temp=new node(d);  //creating the node that is to be inserted
    tail->next=temp;
    tail=temp;

}
void InsertNodeAtmiddle(int position,int d,node* &head,node* &tail)  
{
      //creating the node that is to be inserted
    int count=1;
    node* temp=head;
     if(position==1)
     {
         InsertNodeAtHead(head,d);
         return;
     }
    while(count!=position-1)
    {
        temp=temp->next;
        count++;

    }
        if(temp->next==NULL)
    {
        InsertNodeAtEnd(tail,d);
        return;
    }
    node* Midvalue=new node(d);
  Midvalue->next=temp->next;
  temp->next=Midvalue;

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
    node* node1=new node(5);
   node* head=node1;
   node* tail=node1;
    PrintLinkList(head);
    for (int i = 0; i < 4; i++)
    {
   InsertNodeAtEnd(tail,i);   
    }
    //  InsertNodeAtEnd(tail,8);
    InsertNodeAtmiddle(6,17,head,tail);
    cout<<"head="<<head->data<<endl;
    cout<<"tail="<<tail->data<<endl;
  
    PrintLinkList(head);

return 0;
}