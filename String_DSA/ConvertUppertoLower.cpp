#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;
int main(){

    string name="mandiptamangisuseless";
    int arr[26];
    int len=name.size();
    for(int i=0;i<25;i++)
    {
arr[i]=0;
    }
for(int i=0;i<len;i++)
{
    if(name[i]>='a' && name[i]<='z')
    {
        arr[name[i]-'a']++;
    }
}
int mx=INT_MIN;
char maxChar='a';
for(int i=0;i<len;i++)
{
   if(mx<arr[i])
   { 
    maxChar='a'+i;
    mx=arr[i];
   }
}
cout<<maxChar<<" "<<mx<<" times";
return 0;
}