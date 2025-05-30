#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void RearrangeArray (int arr[],int n)
{
int i=0,j=n-1;
int temp[n];
bool Idx=true;
int k=0;
while (j<n)
{
    if(Idx)
    temp[k]=arr[j--];
    else 
    temp[k]=arr[i++];
   Idx=!Idx;
   k++;
}
for ( i = 0; i < n; i++)
{
   arr[i]=temp[i];
}
for ( i = 0; i < n; i++)
{
   cout<<arr[i]<<" ";
}

}

int main(){
    int arr[]= {1, 2, 3, 4, 5, 6, 7};
    int n=7;
    RearrangeArray(arr,n);
return 0;
}