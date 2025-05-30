#include <iostream>
using namespace std;

int Merge(int arr[], int s, int mid, int e) {
    int count=0;
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int a1[n1], a2[n2];
    
    for (int i = 0; i < n1; i++) {
        a1[i] = arr[s + i];  // Correct initialization of a1
    }
    for (int i = 0; i < n2; i++) {  // Corrected the second for loop
        a2[i] = arr[mid + 1 + i];  // Correct initialization of a2
    }
    
    int i = 0, j = 0, k = s;
    while (i < n1 && j < n2) {
        if (a1[i] <= a2[j]) {  // Fixed comparison to <= for stability
            arr[k] = a1[i];
            i++;
        } else {
            arr[k] = a2[j];
            count+=n1-i;
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = a1[i];
        i++;
        k++;
    }
    
    while (j < n2) {  // Corrected condition to j < n2
        arr[k] = a2[j];  // Corrected copying of elements from a2
        j++;
        k++;
    }
    return count;
}

int  MergeSort(int arr[], int s, int e) {
        int count=0;
    if (s < e) {
        int mid = s + (e - s) / 2;  // Corrected calculation of mid
        count+=MergeSort(arr, s, mid);
        count+=MergeSort(arr, mid + 1, e);
        count+=Merge(arr, s, mid, e);
    }
    return count;
}

int main() {
    int a[] = {3,2,1};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<MergeSort(a, 0, size - 1);  // Corrected length passed to MergeSort
//     for (int i = 0; i < size; i++)
//         cout << a[i] << " ";
    return 0;
}
