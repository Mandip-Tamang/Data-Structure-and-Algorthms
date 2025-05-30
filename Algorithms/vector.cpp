// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
vector <int> FindOccurence(int arr,int target,int i,int len,vector<int> &index)
{
   if(i==len)
   return index;
    if(arr[i]==target)
    index.push_back(i);
    return FindOccurence(arr+1,target,i+1,len,index);

}
int main() {
    int element;
     vector <int> idx;
  int arr[]={1,4,5,3,2,4,4,3};
  cout<<FindOccurence(arr,5,0,9,idx);

    return 0;
}