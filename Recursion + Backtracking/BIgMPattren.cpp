#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter Number of row and col:";
    cin>>row>>col;
    for (int  i = 0; i < row; i++)
    {
       for (int  j = 0; j < col; j++)
    {
    if(j==0 || j==col-1)
    cout<<"*";
    else{
    for(int k=col-2*(i+1);k<row/2;k++)
    {
       cout<<" "; 
    }
    if(i==row/2 && j==col/2)
    cout<<"*";
    }
    }
    cout<<endl;
    }
    
return 0;
}