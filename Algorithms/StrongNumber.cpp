#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isstrongNumber (int n)
{
    int temp=n,sum=0;
    while(n>0)
    {
            int fact=1;
 for(int i=1;i<=n%10;i++)
 {
    fact*=i;
 }
 sum+=fact;
 n/=10;
}

return temp==sum;
}
int main(){
    cout<<isstrongNumber(145);
return 0;
}