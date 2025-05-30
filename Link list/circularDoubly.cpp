#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertElement(node*& tail, int element, int d) {
    if (tail == NULL) { // Empty list, create first node
        node* temp = new node(d);
        tail = temp;
        tail->next = tail; // Circular
        tail->prev = tail; // Circular
    } else {
        // Find the node where we need to insert after `element`
        node* curr = tail;
        while (curr->data != element) {
            if (curr->next == tail) { // Element not found
                cout << "Element not found." << endl;
                return;
            }
            curr = curr->next;
        }

        // Element found, insert new node after `curr`
        node* temp = new node(d);
        temp->next = curr->next;
        temp->prev = curr;

        curr->next->prev = temp;
        curr->next = temp;

        // If inserting after the tail, update the tail
        if (curr == tail) {
            tail = temp;
        }
    }
}

void DeleteNode(node*& tail, int d) {
    if (tail == NULL) {
        cout << "No element found" << endl;
        return;
    }

    node* curr = tail;
    node* prevNode = NULL;

    while (curr->data != d) {
        if (curr->next == tail) { // Element not found
            cout << "Element not found" << endl;
            return;
        }
        curr = curr->next;
    }

    // Single node case
    if (curr->next == curr && curr->prev == curr) {
        delete curr;
        tail = NULL;
        return;
    }

    // Deleting the current node
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;

    // Update tail if deleting tail node
    if (curr == tail) {
        tail = curr->prev;
    }

    delete curr;
}

void PrintLinkList(node* tail) {
    if (tail == NULL) {
        cout << "No element left" << endl;
        return;
    }

    node* temp = tail;
    do {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != tail);
    cout << " (Circular)" << endl;
}

int main() {
    node* tail = NULL;

    InsertElement(tail, 4, 7);
    PrintLinkList(tail);

    InsertElement(tail, 7, 9);
    PrintLinkList(tail);

    InsertElement(tail, 9, 0);
    PrintLinkList(tail);

    InsertElement(tail, 7, 2);
    PrintLinkList(tail);

    cout << "Tail = " << tail->data << endl;

    DeleteNode(tail, 7);
    PrintLinkList(tail);

    DeleteNode(tail, 9);
    PrintLinkList(tail);

    return 0;
}
