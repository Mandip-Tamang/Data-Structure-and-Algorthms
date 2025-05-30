// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int countOne(int n)
{
    int count=0;
    while(n)
    {
    n=n & (n-1);    
    count++;
    }
    return count;
}
int main() {
 cout<<countOne(19);
    return 0;
}