#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node {  //creating class for all nodes
public:
    int data;  //stores value of node
    node* next;  //stores address of next node
    
    node(int data) {
        this->data = data;  //assign the created node with given value
        this->next = NULL;  //point it to null value first
    }
};

void InsertAtHead(node*& head, node*& tail, int d) {
    if (head == NULL) {
        node* temp = new node(d);
        head = temp;
        tail = temp;
    } else {
        node* temp = new node(d);
        temp->next = head;
        head = temp;
    }
}

void PrintLinkList(node*& head) {  //Function to print Linklist
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";  //print value of node pointed by temp
        temp = temp->next;  //Moving temp to next node
    }
    cout << "NULL" << endl;
}

void AddToList(node*& curr, int value) {
    curr->next = new node(value);
    curr = curr->next;
}

void Sort(node*& head) {
    // Dummy heads for the lists containing 0s, 1s, and 2s
    node* ZeroHead = new node(-1);
    node* ZeroTail = ZeroHead;
    node* OneHead = new node(-1);
    node* OneTail = OneHead;
    node* TwoHead = new node(-1);
    node* TwoTail = TwoHead;

    node* temp = head;
    while (temp != NULL) {  // Add and Link 0,1,2 in their own LL
        if (temp->data == 0)
            AddToList(ZeroTail, temp->data);
        else if (temp->data == 1)
            AddToList(OneTail, temp->data);
        else if (temp->data == 2)
            AddToList(TwoTail, temp->data);

        temp = temp->next;
    }

    // Linking part of the 0,1,2 nodes
    if (OneHead->next != NULL) {
        ZeroTail->next = OneHead->next;
    } else {
        ZeroTail->next = TwoHead->next;
    }
    OneTail->next = TwoHead->next;
    TwoTail->next = NULL;

    // Update head to the start of the sorted list
    head = ZeroHead->next;

    // Clean up dummy nodes
    delete ZeroHead;
    delete OneHead;
    delete TwoHead;
}

int main() {
    node* head = NULL;
    node* tail = NULL;
    
    InsertAtHead(head, tail, 2);
    InsertAtHead(head, tail, 1);
    InsertAtHead(head, tail, 2);
    InsertAtHead(head, tail, 0);
    InsertAtHead(head, tail, 1);
    
    cout << "Original List: ";
    PrintLinkList(head);
    
    Sort(head);
    
    cout << "Sorted List: ";
    PrintLinkList(head);

    return 0;
}
