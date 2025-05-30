#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void FindPrimeFactor(int n)
{
    int lpf[100]={0};
    for(int i=2;i<=n;i++)
    {
        lpf[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(lpf[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(lpf[j]==j)
                lpf[j]=i;
            }
        }
    }
    while(n!=1)
    {
        cout<<lpf[n]<<" ";
        n/=lpf[n];
    }
    
}
int main(){
    int n;
    cin>>n;
 FindPrimeFactor(n);
return 0;
}