#include <iostream>
using namespace std;
class Items{
    string name;
    int code;
    int price;
    public:
    Items(string name,int code,int price)
    {
        this->name=name;
        this->code=code;
        this->price=price;
    }
    void Display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Code:"<<code<<endl;
        cout<<"Price:"<<price<<endl;
        
    }
}
int main(){
    int code,price;
    string name;
    for(int i=0;i<4;i++)
    {
  cout<<"Enter name,code and Price: ";
  cin>>name;
  cin>>code;
  cin>>price;
    Items item[i](name,code,price);
    }
    for (int i = 0; i < 4; i++)
    {
        item[i].display();
    }
return 0;
}