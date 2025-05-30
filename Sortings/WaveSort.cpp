#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void WaveSort(int arr[],int len)
{
for (int i = 1; i < len; i+=2)
{
   if(arr[i]>arr[i-1])
   {
    swap(arr,i,i-1);
   }
   if(arr[i]>arr[i+1] && i<=len-2)
   {
    swap(arr,i,i+1);
   }
}


}
int main(){
    int arr[]={2,3,1,6,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    WaveSort(arr,len);
    for(int i=0;i<len;i++)
    cout<<arr[i]<<" ";
return 0;
}