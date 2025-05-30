#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
void DNFSort(int arr[],int len)
{
 int i=0,j=0,k=len-1;
 while(j<k)
 {
    if(arr[j]==0)
    {
       swap(arr[j],arr[i]);
        j++;
        i++;  
    }
    else if(arr[j]==1)
    {
        j++;
    }
    else 
    {
        swap(arr[j],arr[k]);
        j++;
        k--;
    }
 }
}
int main(){
    int arr[]={2,3,1,6,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    DNFSort(arr,len);
    for(int i=0;i<len;i++)
    cout<<arr[i]<<" ";
return 0;
}