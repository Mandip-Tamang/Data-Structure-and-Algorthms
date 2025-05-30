
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void keypad(string num,string ans)
{
        if(num.empty())
        {
                cout<<ans<<endl;
                return;
        }
        char number=num[0];
        int Keynum=number -'0';
        for(int i=(Keynum-1)*3;i<Keynum*3;i++)
        {
                char ch ='a' + i;
                keypad(num.substr(1),ans+ch);
        }
}
int main()
{
 keypad("12","");
    return 0;
}