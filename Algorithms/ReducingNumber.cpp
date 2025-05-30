#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {10, 16, 7, 14, 5, 5, 12, 9};
    vector<pair<int, int>> Pair(arr.size());
    
    for (int i = 0; i < arr.size(); i++) // Corrected loop condition
    {
       Pair[i].first = arr[i];
       Pair[i].second = i;
    }
    
    sort(Pair.begin(), Pair.end()); // Sort Pair vector
    
    for (int i = 0; i < arr.size(); i++) // Corrected loop condition
    {
      arr[Pair[i].second] = i;
    }
    
    for (int i = 0; i < arr.size(); i++) // Corrected loop condition
    {
      cout << arr[i] << " ";
    }
    
    return 0;
}
