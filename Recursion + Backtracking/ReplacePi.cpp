// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void ReplacePi(string str)
{
    if(str.length()==0)
    return;
 
 if(str[0]=='p' and str[1]=='i')
{
cout<<"3.14";
ReplacePi(str.substr(2));
}
else
{
cout<<str[1];
ReplacePi(str.substr(1));
}
}
int main() {
  
   ReplacePi("piaskjjdpipasipi");
    return 0;
}