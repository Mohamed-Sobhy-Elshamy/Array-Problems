#include <bits/stdc++.h>
using namespace std;
/*
Given a binary array arr[] of size N,
which is sorted in non-increasing order,
count the number of 1’s in it.

Examples:
Input: arr[] = {1, 1, 0, 0, 0, 0, 0}
Output: 2
*/
int countOnes(bool arr[], int low, int high) {
    if(high >= low) {
        int mid = low + (high-low) / 2; // middle index

        // if element at middle index
        if( (mid==high || arr[mid+1]==0) && (arr[mid] == 1) ) {
            return mid + 1;
        }
        // right side
        if(arr[mid] == 1)
            return countOnes(arr, (mid+1), high);

        // left side
        return countOnes(arr, low, (mid-1));
    }
    return 0;
}


int main()
{
    // Binary search and Recursion
    bool arr[] = { 1, 1, 1, 1, 0, 0, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Count of 1's in given array is "
        << countOnes(arr, 0, n-1);

    return 0;
}
