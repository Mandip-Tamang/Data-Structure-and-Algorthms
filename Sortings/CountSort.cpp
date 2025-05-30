#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void CountSort(int arr[],int len)
{
    int maxNum=INT_MIN;     
    for (int i = 0; i < len; i++) // Find Maximum element present 
    {
        maxNum=max(arr[i],maxNum);
    }
    int FreqArr[maxNum+1]={0};// initialize initial frequency as 0
    for(int i=0;i<len;i++) // Count and store the Freqency of element
    {
        FreqArr[arr[i]]+=1;
    }
    int idx=0;
     for (int i = 0; i <=maxNum; i++) // Traverse over Frequency array and Make change in orignal array according to frequency 
    {
        while(FreqArr[i]>0)
        {
            arr[idx]=i; 
            idx++;
            FreqArr[i]--;  //decrementing the frequency to 0
        }
        
    }
}
int main(){
    int arr[]={2,3,1,6,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    CountSort(arr,len);
    for(int i=0;i<len;i++)
    cout<<arr[i]<<" ";
return 0;
}