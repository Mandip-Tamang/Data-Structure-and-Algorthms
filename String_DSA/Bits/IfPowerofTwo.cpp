#include <iostream>
using namespace std;
bool isPower(int n)
{
return (n and !(n & n-1));
}
int main() {
    int n;
    cin >>n;
    if(isPower(n))
        cout<<"Yes";
        else 
        cout<<"No";
    return 0;
}
