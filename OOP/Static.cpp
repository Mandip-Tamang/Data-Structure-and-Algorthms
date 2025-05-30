// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
    public:
    static int a;
    void GetInfo()
    {
        a++;
        cout<<a<<endl;
    }
};
int A::a=0;
int main() {
  A x,y;
x.GetInfo();
y.GetInfo();
  y.GetInfo();

    return 0;
}