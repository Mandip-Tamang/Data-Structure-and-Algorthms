#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int d)
{
    this->data=d;
    this->next=NULL;
}
};
void InsertElement(node* &tail,int element,int d)
{
if(tail==NULL)  
{
    node* temp=new node(d);
    tail=temp;
    temp->next=tail;
}
else 
{  
    node* curr=tail;
    while(curr->data!=element)  //searching for Inserting Position 
    {
        if(curr -> next == tail)
        {
        cout << "Element not found .";
        return;
        }
        
        curr=curr->next;
    }
    //Element found 
     node* temp=new node(d);
    temp->next=curr->next;
    curr->next=temp;
}
}
void DeleteNode(node* &tail, int d) {
    if (tail == NULL) {
        cout << "No element found" << endl;
        return;
    }

    node *prev = tail;
    node *curr = tail->next;

    // Traverse the circular linked list to find the node with value `d`
    while (curr->data != d) {
        if (curr == tail) { // Completed one full circle, element not found
            cout << "Element not found" << endl;
            return;
        }
        prev = curr;
        curr = curr->next;
    }

    // Node to delete is found
    if (curr == tail && curr == tail->next) { // Only one node in the list
        tail = NULL;
    } else if (curr == tail) { // Deleting the tail node
        prev->next = curr->next;
        tail = prev;
    } else { // Deleting a node other than the tail
        prev->next = curr->next;
    }

    curr->next = NULL;
    delete curr;
}

void PrintLinkList(node* tail)
{
    if(tail==NULL)
    cout<<"No elememt left";
    else 
    {
    node* temp=tail;
    do{
        cout<<tail->data<<"->";
        tail=tail->next;
    }while(tail!=temp);
}
}
// bool IsCircular(node* &tail)
// {
//     if(tail==NULL)
//     return true;
// node* temp=tail;
// while(temp->next!=tail)
// {
//     if(temp->next==NULL)
//     return false;
//    temp=temp->next;
// }
// return true;
// }
// 
int main(){
    node* tail=NULL;
    InsertElement(tail,4,7);
    PrintLinkList(tail);
    cout<<endl;
    InsertElement(tail,7,9);
    PrintLinkList(tail);
    cout<<endl;
    InsertElement(tail,9,0);
    PrintLinkList(tail);
    cout<<endl;
    InsertElement(tail,7,2);
    PrintLinkList(tail);
    cout<<endl;
    cout<<"tail= "<<tail->data;
    cout<<endl;
    PrintLinkList(tail);
    cout<<endl;
    InsertElement(tail,10,2);
    PrintLinkList(tail);
    cout<<endl;
    
return 0;
}