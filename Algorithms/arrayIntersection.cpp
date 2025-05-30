#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool  search(vector<int> &b, int key)
  {
      int s = 0 , e = b.size() - 1, m = s + (e - s)/2;
      while(s <= e)
      {
          if(b[m] > key)
          s = m - 1;
          else if(b[m] < key)
          e = m + 1;
          else
          return true;
          m = s + (e - s)/2;
      }
      return false;
  }
    int numberofElementsInIntersection(vector<int> &a, vector<int> &b) {
       sort(b.begin() , b.end());
       int count = 0;
       for(int i = 0; i < a.size(); i++)
       {
           if(search(b , a[i]))
           count++;
       }
       if(count > 0)
       return count;
       else 
       return -1;
    }
int main(){
 vector<int> a = {8,2,4,7,3,0}; 
 vector<int> b = {8,4,6,7,3,1};
 cout <<  numberofElementsInIntersection(a ,b);
return 0;
}