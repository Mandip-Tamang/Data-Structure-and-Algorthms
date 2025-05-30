#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
class MyStack {
  private:
    Node *top;

  public:
    void push(int x) {
       Node* temp=new Node(x);
       temp->next=top;
       top=temp;
    }
 bool isEmpty()
 {
     return top==NULL;
 }
    int pop() {
      if(isEmpty())
     return -1;
      else 
      {
          Node* temp=top;
          int ans=top->data;
          top=top->next;
          delete temp;
          return ans;
      }
    }
    int peep()
    {
        if(!isEmpty())
        return top->data;
        else 
        return -1;
    }

    MyStack() { top = NULL; }
};    
int main(){
 MyStack m;
 m.push(5);
 m.push(15);
 m.push(35);
 m.push(45);
cout<< m.peep()<<endl;
 m.pop();
cout<< m.peep();
return 0;
}