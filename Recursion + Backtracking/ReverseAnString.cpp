// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverseString(string str)
{
    if (str.length() == 0)
        return;
    string str1 = str.substr(1);
    reverseString(str1);
    cout << str[0];
}
int main()
{
    string name;
    cin >> name;
    reverseString(name);
    return 0;
}