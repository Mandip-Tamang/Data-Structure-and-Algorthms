#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Permutation(string num,string ans)
{
if(num.empty())
{
    cout<<ans<<endl;
    return;
}
for (int i = 0; i <=ans.length(); i++)
{
  char ch=num[0];
  string f=ans.substr(0,i);
  string l=ans.substr(i);
Permutation(num.substr(1),f+ch+l);
}

}
int main(){
    Permutation("12345","");
return 0;
}