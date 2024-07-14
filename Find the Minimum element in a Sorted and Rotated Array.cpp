#include <bits/stdc++.h>
using namespace std;
/*
Given a sorted array arr[] (may be distinct or may contain duplicates) of size N
that is rotated at some unknown point, the task is to find the minimum element in it.

Examples:
Input: arr[] = {5, 6, 1, 2, 3, 4}
Output: 1
*/
int findMin(int arr[], int Size) {
    int min_ele = arr[0];

    for(int i=0; i<Size; i++) {
        if(arr[i] < min_ele) {
            min_ele = arr[i];
        }
    }
    return min_ele;
}


int main()
{
    // Linear search
    int arr[] = { 5, 6, 1, 2, 3, 4 };
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    cout << findMin(arr, sizeArr) << endl;
    // Output = 1

    return 0;
}
