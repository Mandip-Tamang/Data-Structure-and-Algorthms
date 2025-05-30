#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{ // creating class for all nodes
public:
  int data;   // stores value of node
  node *next; // stores address of next node
  node(int data)
  {

    this->data = data; // assign the created node with given value
    this->next = NULL; // point it to null value first
  }
};

void InsertAtHead(node *&head, node *&tail, int d)
{
  if (head == NULL)
  {
    node *temp = new node(d);
    head = temp;
    tail = temp;
  }
  else
  {
    node *temp = new node(d);
    temp->next = head;
    head = temp;
  }
}
void InsertAtTail(node *&head, node *&tail, int d)
{
  if (tail == NULL && head == NULL) // no node is present
  {
    node *temp = new node(d);
    tail = temp;
    head = temp;
  }
  else
  {
    node *temp = new node(d); // at least one node is present
    tail->next = temp;
    tail = temp;
  }
}
void InsertNodeAtPosition(int position, int d, node *&head, node *&tail)
{
  // creating the node that is to be inserted
  int count = 1;
  node *temp = head;
  if (position == 1)
  {
    InsertAtHead(head, tail, d);
    return;
  }
  while (count != position - 1)
  {
    temp = temp->next;
    count++;
  }
  if (temp->next == NULL)
  {
    InsertAtTail(tail, head, d);
    return;
  }
  node *InsertNode = new node(d);
  InsertNode->next = temp->next;
  temp->next = InsertNode;
}
void DeleteNode(int pos, node *&head, node *&tail)
{
  int count = 1;
  node *temp = head;
  node *curr = head->next;
  if (pos == 1)
  {
    head = curr;
    temp->next = NULL;
    delete (temp);
    return;
  }
  while (count != pos - 1)
  {
    temp = temp->next;
    curr = curr->next;
    count++;
  }
  if (curr->next == NULL)
    tail = temp;
  temp->next = curr->next;
  curr->next = NULL;
  delete (curr);
}
void PrintLinkList(node *&head) // Function to print  Linklist
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->"; // print value of node pointed by temp
    temp = temp->next;          // Moving temp to next node
  }
  cout << endl;
}
int main()
{
  node *head = NULL;
  node *tail = NULL;
  for (int i = 0; i < 6; i++)
  {
    InsertAtHead(head, tail, i);
  }
  cout << "Current LinkList is :";
  PrintLinkList(head);
  int choice, data, pos;
  while (choice < 6)
  {
    cout << "Choose  number from 1-6" << endl;
    cout << "Enter your choice :";
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << " Enter data to insert at first:";
      cin >> data;
      InsertAtHead(head, tail, data);
      cout << "Preset linkList is : ";
      PrintLinkList(head);
      cout << " -------------------" << endl;
      break;

    case 2:
      cout << " Enter data to insert at last:";
      cin >> data;
      InsertAtTail(head, tail, data);
      cout << "Preset linkList is : ";
      PrintLinkList(head);
      cout << " -------------------" << endl;
      break;

    case 3:
      cout << " Enter data to insert and position :";
      cin >> data >> pos;
      InsertNodeAtPosition(pos, data, head, tail);
      cout << "Preset linkList is : ";
      PrintLinkList(head);
      cout << " -------------------" << endl;
      break;

    // case 4:
    //   cout << " Enter data to insert at last:";
    //   cin >> data;
    //   InsertAtTail(head, tail, data);
    //   cout << "Preset linkList is : ";
    //   PrintLinkList(head);
    //   cout << " -------------------" << endl;
    //   break;

    case 4:
      cout << " Enter position to delete:";
      cin >> pos;
      DeleteNode(pos, head, tail);
      cout << "Preset linkList is : ";
      PrintLinkList(head);
      cout << " -------------------" << endl;
      break;

    default:
      exit(1);
      break;
    }
  }
  //  PrintLinkList(head);
  //  DeleteNode(6,head,tail);
  //  PrintLinkList(head);
  //  cout<<"head="<<head->data<<endl;
  //  cout<<"tail="<<tail->data<<endl;
  //  DeleteNode(4,head,tail);
  //  PrintLinkList(head);
  //  cout<<"head="<<head->data<<endl;
  //  cout<<"tail="<<tail->data<<endl;
  //  DeleteNode(1,head,tail);
  //  PrintLinkList(head);
  //  cout<<"head="<<head->data<<endl;
  //  cout<<"tail="<<tail->data<<endl;
  return 0;
}