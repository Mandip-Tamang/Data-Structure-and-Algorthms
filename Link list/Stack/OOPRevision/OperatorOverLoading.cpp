#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Overload{
    public:
    int a;
    void operator+ (Overload &obj) //OverLoad + to add two Number(the Previous Object in calling function is current Obj In this case O1 is current object and O2 is parameter )
    {
        int val1 = this -> a;
        int val2 = obj.a;
        cout << "Answer =" << val1 + val2 <<endl;
    }
    void operator() () //OverLoad 
    {
        cout << "I am Bracket " <<this->a<< endl;
    }
};
int main(){
Overload O1,O2;
O1.a=3;
O2.a=4;
O1 + O2;
O2();
return 0;
}