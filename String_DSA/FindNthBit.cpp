#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findNthBit(int n,int i)
{
    return n&(1<<i);
}
int main(){
    int bit,i;
    cout<<"Enter bit :";
    cin>>bit>>n;
   if(findNthBit(bit,n)!=0)
   cout<<"1";
   else 
   cout<<"0";
return 0;
}