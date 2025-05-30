// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
const int MAX_ARRAY=26;
int hash[MAX_ARRAY]={0};
string arr="aquickbrownfoxjumpsoverlazydog";
for(int i=0;i<arr.length();i++)
{
   hash[arr[i]-'a']++;
}
for(int i=0;i<26;i++)
{
for(int j=0;j<hash[i];j++)
{
  cout<< (char)('a'+i);
}
}
    return 0;
}