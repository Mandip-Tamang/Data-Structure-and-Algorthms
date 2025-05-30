// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void sort(int arr[],int i,int j,int max)
{
 if(i==0)
 return;
 if(i>=j)
 {
 if(arr[max]<arr[j])
{
    max=j;
}
sort(arr,i,j+1,max);
}
 else 
 {
int temp=arr[i];
 arr[i]=arr[max];
arr[max]=temp;
 sort(arr,i-1,0,0);
 }
 }
int main() {
    int arr[]={6,5,4,3,2,1,8};
   sort(arr,6,0,0);
   for(int i=0;i<7;i++)
   cout<<arr[i]<<" ";
    return 0;
}