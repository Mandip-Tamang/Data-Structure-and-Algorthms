#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    double *ptr;
    Student (string name,double cgpa)
    {
        this->name=name;
        ptr=new double;
        *ptr=cgpa;
    }
  Student (Student &obj)
  {
    this->name=obj.name;
    ptr=new double;
    *ptr=*(obj.ptr);
  }
  void GetInfo()
  {
    cout<<name<<endl;
    cout<<*ptr;
  }
};
int main(){
    Student s1("Mandip",8.3);
    s1.GetInfo();
    Student s2(s1);
    *(s2.ptr)=9;
    s1.GetInfo();
return 0;
}