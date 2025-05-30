#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Father{
    public:
    void Speak() //Function OverRiding
    {
        cout << "I am your father " <<endl;
    }
};
class Son:public Father{
    public:
    void Speak() //This method Override(replace)the inherited method Speak  from Father class
    {
        cout << "I am your Son " <<endl;
    }
};
int main(){
 Son s;
 s.Speak();
return 0;
}