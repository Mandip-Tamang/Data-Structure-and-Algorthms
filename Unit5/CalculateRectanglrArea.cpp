#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
    public:
    int l,b,area;
    void setValue(int x,int y){
        l=x;
        b=y;
    }
   int calcArea(){
   area=l*b;
   return area;
}
   int perimeter(){
  int peri =2 * (l + b);
   return peri;
}
};
int main(){
    Rectangle r1;
   r1.setValue(6,4);
   int ans=r1.calcArea();
   int peri=r1.perimeter();
  cout<<ans<<endl;
  cout<<peri;
return 0;
}