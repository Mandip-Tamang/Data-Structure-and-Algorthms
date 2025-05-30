#include <iostream>
#include <vector>
using namespace std;
void Merge(vector <int>&arr,int s,int e,int m)
{
    int n1=m-1-s;
    int n1=e-m;
vector <int> L(n1),R(n2);




}
void MergSort(int arr[],int s,int e,int m)
{
m=(s+e)/2;
if(s<e)
{   
MergeSort(arr,s,m);
MergeSort(arr,m+1,e);
Merge(arr,s,m);
}
}


int main()
{
    vector <int> Arr={5,4,3,2,1};
    MergeSort(Arr,0,arr.size-1);
}