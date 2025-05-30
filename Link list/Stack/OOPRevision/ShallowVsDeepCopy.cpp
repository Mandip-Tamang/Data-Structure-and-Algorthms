// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class person{
    public:
    int age;
    char *name;
    person()
    {
        cout<<"Construtor called "<<endl;
        name=new char[100];
    }
    // person(person & temp)//deep copy
    // {
    //     char * ch= new char[strlen(temp.name)+1]; //allocate new location 
    //     //copy the data ans point current object's name to new memory 
    //     strcpy(ch,temp.name);
    //     this->name=ch;
    //     this->age=temp.age;
    // }
    void setData(int age,char name[])
    {
        this->age=age;
        strcpy(this->name,name);
    }
    void print()
    {
        cout<<"["<<"Name:"<<this->name<<",";
        cout<<"age :"<<this->age<<"]"<<endl;
    }
    
};
int main() {
    person p;
    char name[7]="Mandip";
    char name1[7]="Sandip";
    p.setData(19,name);
   person p1(p);
    p.name[0]='S';
    p.print();   
    p1.print();

    return 0;
}