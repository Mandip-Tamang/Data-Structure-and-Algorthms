#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int num)
    {
        if (size - top >= 1)
        {
            top++;
            arr[top] = num;
        }
        else
        {
            cout << "stack OverFlow";
        }
    }
    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "Stack is Empty";
    }
    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
            cout << "Stack UnderFlow";
            return -1;
    }
    bool IsEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};
 int main()
{
    Stack s(5);
    s.push(12);
    s.push(13);
    s.push(14);
    cout<<s.peek();
}