#include <bits/stdc++.h>
using namespace std;
/*
Given a sorted and rotated array arr[] of size N and a key,
the task is to find the key in the array.
Note: Find the element in O(logN) time and assume that all the elements are distinct.

Example:
Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}, key = 3
Output : Found at index 8
*/
int Search(int arr[], int low, int high, int key) {
    if(low > high)
        return -1;

    int mid = (low + high) /2;
    if(arr[mid] == key)
        return mid;

    if(arr[low] <= arr[mid]) {
        if(key >= arr[low] && key <= arr[mid]) {
            return Search(arr, low, mid-1, key);
        }
        return Search(arr, mid+1, high, key);
    }

    if(key >= arr[mid] && key <= arr[high]) {
        return Search(arr, mid+1, high, key);
    }
    return Search(arr, low, mid-1, key);

}


int main()
{
    // Using Binary search and Recursion
    int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    int i = Search(arr, 0, n - 1, key);

    if(i != -1) {
        cout << "Index : " << i << endl;
    } else {
        cout << "key not found" << endl;
    }
    // Output -> Index : 8


    return 0;
}
