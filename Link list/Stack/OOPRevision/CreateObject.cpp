#include <iostream>
#include <string>
using namespace std;
class person {
    public:
    string name;
    int age;
    string gender;
    // void setAge(int n)
    // {
    //   age=n;
    // }
    void setName(string n)
    {
       name=n;
    }
       int getAge()
    {
      return age;
    }
    string getName()
    {
       return name;
    }
    person(int age)
{
    cout<<"I am constructor"<<endl;
    this->age=age;
    cout<<this<<endl;
}
};

int main(){
    person p1(17);  //statically created
    person *p=new person(14);  //Dynamically created
    // p->setAge(19);
    p->setName("Mandip");
    cout<<p->getAge()<<endl;
    cout<<p->getName()<<endl;
    cout<<"Address of this"<<&p;
return 0;
}