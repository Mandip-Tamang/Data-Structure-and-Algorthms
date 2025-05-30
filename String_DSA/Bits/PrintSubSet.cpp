// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void Subset(int arr[],int n)
{
 for(int i=0;i<(1<<n);i++)
 {
for(int j=0;j<n;j++)
{
    if(i & (1<<j))
    {
        cout<<arr[j]<<" ";
    }
}
    cout<<endl;
 }
}

int main(){ 
int arr[]={1, 2 ,3 ,4};
Subset(arr,4);
    return 0;
}