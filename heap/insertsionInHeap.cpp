#include <iostream>
using namespace std;
class heap{ //Implementing Max heap i.e parent is greater 
public:
int arr[100];
int size;

heap()
{
  size = 0;
  arr[0] = -1;
}
void insert(int val)
{
  size = size + 1; //insert at the end position 
  int idx = size;
  arr[idx] = val;

  while(idx > 1)
    {
      int parentIdx = idx / 2;
      //maintain heap order property
      if(arr[parentIdx] < arr[idx])
      {
      swap(arr[parentIdx] , arr[idx]);
      idx  = parentIdx;
      }
  else 
  {
    return;
  }
    }
}
  void print()
{
  for(int i = 1; i <= size ; i++)
    {
      cout << arr[i] << " ";
    }
}
};
int main()
{
  heap h;
  h.insert(50);
  h.insert(52);
  h.insert(53);
  h.insert(54);
  h.insert(55);
  h.print();
}