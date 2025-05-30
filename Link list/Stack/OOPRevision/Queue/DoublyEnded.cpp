#include <iostream>
using namespace std;
class MyCircularDeque {
public:
   int *arr;
   int front;
   int rear;
   int size;
    MyCircularDeque(int k) {
        size = k;
        arr = new int[k];
        front = rear = -1;
    }

    bool insertFront(int value) {
        if((front == 0 && rear == size - 1) || 
        (rear == (front - 1) % (size - 1)))
        return -1;
        else if(front == 0 && rear!=size -1)
         front = size - 1;
         else 
         front--;
         arr[front] = value;
         return true;
    }

    bool insertLast(int value) {
              if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) 
            return false;
        else if(front == -1) {
            front = rear = 0;
        }
        else if(front != 0 && rear == size - 1) {
            rear = 0;
        }
        else {
            rear++;
        }
        arr[rear] = value;
        return true;
    }
 bool isEmpty() {
     return front == -1;
    }
    bool deleteFront() {
           if(isEmpty()) {
            return false;
        }
        else if(front == rear) {
            front = -1;
            rear = -1;
        }
        else if(front == size - 1) {
            front = 0;
        }
        else {
            front++;
        }
        return true;
    }

    bool deleteLast() {
             if(isEmpty()) {
            return false;
        }
        else if(front == rear) {
            front = -1;
            rear = -1;
        }
        else if(rear == 0) {
            rear = size - 1;
        }
        else {
            rear--;
        }
        return true;
    }

    int getFront() {
        if(isEmpty())
        return -1;
        else 
        return arr[front];
    }

    int getRear() {
         if(isEmpty())
        return -1;
        else 
        return arr[rear];
    }

    bool isFull() {
         if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) 
         return true;
         else 
         return false;
    }
};
int main()
{
     MyCircularDeque Q(5);
     Q.insertLast(19);
     Q.insertFront(14);
     Q.insertLast(18);
     cout << Q.getRear() <<endl;
     cout << Q.getFront() <<endl;
     Q.deleteLast();
     cout << Q.getRear() <<endl;
     Q.deleteFront();
     Q.deleteLast();
     cout << Q.isEmpty();
}