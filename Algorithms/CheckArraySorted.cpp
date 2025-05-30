// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool CheckSorted(int arr[],int n)
{
if(n==1)
return 1;
    if(arr[n-1]>arr[n-2])
    return CheckSorted(arr,n-1);
    else 
    return 0;
}
int main() {
int arr[]={1,2,3,4,5,6};
cout<<CheckSorted(arr,6);
    return 0;
}