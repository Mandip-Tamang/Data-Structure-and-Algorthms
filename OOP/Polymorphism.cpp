#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
void GetInfo()
{
    cout<<"Parent Class";
}
};
class Child: public Parent
{
    public:
void GetInfo()
{
    cout<<"Child Class";
}
};
int main(){
Child c;
c.GetInfo();

return 0;
}