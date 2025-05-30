#include <iostream>
using namespace std;

class node { // Creating class for all nodes
public:
    int data;     // Stores value of node
    node* next;   // Stores address of next node
    node* prev;   // Stores address of previous node

    node(int data) {
        this->data = data; // Assign the created node with given value
        this->next = NULL; // Point it to null value first
        this->prev = NULL; // Point it to null value first
    }
};

int GetLength(node* &head) { // Function to return Length of LinkList
    int len = 0;
    node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(node* &head, node* &tail, int d) {
    if (head == NULL) {
        node* temp = new node(d);
        head = temp;
        tail = temp;
    } else {
        node* temp = new node(d);
        temp->next = head;
        head->prev = temp; // Update the previous pointer of the old head
        head = temp;
    }
}

void InsertAtTail(node* &tail, node* &head, int d) {
    if (tail == NULL) {
        node* temp = new node(d);
        tail = temp;
        head = temp;
    } else {
        node* temp = new node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void InsertNodeAtPosition(int position, int d, node* &head, node* &tail) {
    if (position == 1) {
        InsertAtHead(head, tail, d);
        return;
    }

    node* temp = head;
    int count = 1;
    while (count != position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) {
        InsertAtTail(tail, head, d);
        return;
    }

    node* InsertNode = new node(d);
    InsertNode->next = temp->next;
    temp->next->prev = InsertNode;
    temp->next = InsertNode;
    InsertNode->prev = temp;
}

void FindMiddle(node* &head)
{
    if(head==NULL)
    {
    cout<<"Empty List";
    return;
    }
    node* slow=head;
    node* fast=head;
    while(fast->next!=NULL)
    {
        fast=fast->next;
        if(fast->next!=NULL)
        fast=fast->next;
        slow=slow->next;
    }
    cout<<"Middle Node="<<slow->data<<endl;
}

void PrintLinkList(node *&head) { // Function to print Linklist
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->"; // Print value of node pointed by temp
        temp = temp->next;         // Moving temp to next node
    }
    cout << "NULL" << endl;         // Print NULL at the end to indicate the end of the list
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    InsertAtHead(head, tail, 3);
    PrintLinkList(head);
    InsertAtTail(tail, head, 2);
    PrintLinkList(head);
    InsertAtHead(head, tail, 7);
    InsertAtHead(head, tail, 7);
    PrintLinkList(head);
    InsertAtHead(head, tail, 0);
    PrintLinkList(head);
    InsertNodeAtPosition(5, 24, head, tail);
    PrintLinkList(head);
    FindMiddle(head);

    return 0;
}
