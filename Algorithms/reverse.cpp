#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <string> Substring(string str,string ans,vector <string> &lists ) {
    if(str.empty())
    {
    lists.push_back(ans);
    return ans;
    }
    char ch=str[0];yk
   return Substring(str.substr(1),ans+ch,lists);
   return Substring(str.substr(1),ans+ch,lists);
   return Substring(str.substr(1),ans,lists);
}

int main() {
      vector <string> lists;
   cout<< Substring("abc","",lists);//ccsadcg
//     cout<<"[";
//     for(int i=0;i<lists.size();i++)
//     {
//           cout<<lists[i];
//           if(i<lists.size()-1)
//           cout<<",";
          
//     }
    cout<<"]";
    return 0;
}
