#include <iostream>
using namespace std;
class queue{
    public:
    int *arr;
    int qfront;
    int rear;
    int size;
queue (int size)
{
    this->size = size;
    this->arr= new int[size];
    qfront = 0;
    rear = 0;
}
bool isEmpty()
{
    return rear==qfront;
}
void enqueue(int val) //Insertsion operation 
{
 if(rear==size)
 {
    cout << "Queue is Full ";
 }
 else
 {
    arr[rear]=val;
    rear++;
 }
}
int dequeue()  //Pop Opeation
{
 if(isEmpty())
 {
    cout << "Queue Empty";
   return -1;
 }
 else
 {
    int ans = arr[qfront];
   arr[qfront]=-1;
   qfront++;
   if(qfront==rear)
   {
    rear=0;
    qfront=0;
   }
   return ans;
 }
}
int peek()
{
    if(!isEmpty() && rear!=size)
    return arr[rear-1];
    else 
    return -1;
}
int front()
{
    if(!isEmpty())
    return arr[qfront];
    else 
    return -1;
}
};
int main(){
  queue Q(100);
  Q.enqueue(12);
  Q.enqueue(13);
  Q.enqueue(14);
    cout << Q.front() <<endl;
  cout << Q.dequeue() <<endl;
  cout << Q.dequeue() <<endl;
  cout << Q.dequeue() <<endl;
  cout << Q.isEmpty() << endl;
 

return 0;
}