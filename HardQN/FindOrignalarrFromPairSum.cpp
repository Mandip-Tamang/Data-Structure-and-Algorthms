// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void FindOrignalArray(int pair[],int n)
{
    int arr[n];
    arr[0]=(pair[0]+pair[1]-pair[3])/2;
    for(int i=1;i<n;i++)
    {
        arr[i]=pair[i]-arr[0];
    }
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
int main() {
int pair[]={14, 9, 10, 11, 12, 7};
int n=4;
FindOrignalArray(pair,n);


    return 0;
}