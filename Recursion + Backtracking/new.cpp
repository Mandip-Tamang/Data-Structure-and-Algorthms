/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
using namespace std;
int rev(int n,int count)
{
      if(n==0)
   return count;
   if(n%10==0)
   count++;
   
   return rev(n/10,count);
}

int main()
{
   cout<<rev(1009201,0);
    return 0;
}