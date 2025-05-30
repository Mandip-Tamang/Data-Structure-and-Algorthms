#include <iostream>
using namespace std;
long long int floorSqrt(long long int n) {
      long long int s = 0, e = n ,mid =s + (e - s)/ 2;
        long long int ans = -1;
     while(s <= e)
     {
         mid =s + (e - s)/ 2;
         if(mid*mid == n)
         return mid;
         else if(mid * mid > n) 
         {
         e = mid - 1;
         }
         else
         {
         ans = mid;
         s = mid + 1;
         }
     }
     return ans;
    }

    double findPrecise(int n, int temp)
    {
        double prec = 1;
        double ans;
        for (int i = 0; i < 3; i++)
        {
        prec = prec / 10;
        for (double j = temp; j * j < n; j+=prec)
        {
            ans = j;
        } 
        }
        return ans;  
    }
int main(){
    long long int temp =  floorSqrt(29);
     cout << "Precise sqrt is : " << findPrecise(29 , temp);
}