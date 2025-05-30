#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int EuclidAlgo(int n,int m)
{
    while(m!=0)
    {
        int rem=n%m;
        n=m;
        m=rem;
    }
    return n;
}
int main(){
int m,n;
cin>>m>>n;
cout<<EuclidAlgo(m,n);
return 0;
}