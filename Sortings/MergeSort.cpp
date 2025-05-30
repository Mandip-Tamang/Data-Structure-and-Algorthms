#include <iostream>
using namespace std;

void Merge(int arr[], int s, int mid, int e) {
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
}

void MergeSort(int arr[], int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;  // Corrected calculation of mid
        MergeSort(arr, s, mid);
        MergeSort(arr, mid + 1, e);
        Merge(arr, s, mid, e);
    }
}

int main() {
    int a[] = {6, 3, 9, 5, 2, 8, 7, 1};
    int size = sizeof(a) / sizeof(a[0]);
    MergeSort(a, 0, size - 1);  // Corrected length passed to MergeSort
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    return 0;
}
