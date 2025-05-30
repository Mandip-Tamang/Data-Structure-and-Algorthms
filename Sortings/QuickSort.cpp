#include <iostream> //All Element less than should be in left side of pivot Whereas Greater Element should be in Right part of pivot ->pivot is a refrence point that can be any element 
using namespace std;
void QuickSort(int arr[],int left,int right)
{
    if(left>=right)
    return;
        int s=left;
        int e=right;
        int mid=left+(right-left)/2;//Chosing Pivot Element as middle
        int pivot=arr[mid];
        while(s<=e)
        {
            while (arr[s]<pivot) //Moving Left pointer ahead if obey rule
            {
               s++;
            }
            while (arr[e]>pivot) //Moving Right pointer back if obey rule
            {
               e--;
            }
            if(s<=e)
            {
            int temp=arr[s]; //Swapping if it violate rule 
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
            }
            
        }
    QuickSort(arr,left,e); //recursively Sort Left Part of pivot
    QuickSort(arr,s,right);//recursively Sort right Part of pivot
}

int main() {
    int arr[] = {19, 23, 53, 4, 3, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
