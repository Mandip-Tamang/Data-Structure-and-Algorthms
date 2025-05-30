#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Parent{
    public:
    string name;
    int age;
};
class Child1: public Parent{
public:
int roll;
};

class Child2 : public Child1{
    public:
    string research;

void GetInfo()
    {
cout<<"name="<<name<<endl;
cout<<"age="<<age<<endl;
cout<<"roll="<<roll<<endl;
cout<<"research="<<research;
    }
};
int main(){
    Child2 c;
    c.research="Robotics";
    c.roll=18;
    c.name="Robotics";
    c.age=19;
    c.GetInfo();
return 0;
}