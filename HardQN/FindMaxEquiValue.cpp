// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int FindMaxEquiValue(int arr[],int n)
{
 int sum=0;
 int leftSum=0;
 int maxSum=INT_MIN;
 for(int i=0;i<n;i++)
 {
     sum+=arr[i];
 }
 for(int i=0;i<n;i++)
 {   
     leftSum+=arr[i];  
     int rightSum=sum-leftSum+arr[i];
     if(rightSum==leftSum)
     maxSum=max(rightSum,maxSum);

 }
 return maxSum;
}
int main() {
int arr[]=  {-1, 2, 3, 0, 3, 2, -1};
int n=7;
cout<<FindMaxEquiValue(arr,n);
    return 0;
}