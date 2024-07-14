#include <bits/stdc++.h>
using namespace std;
/*
Given an array, find an element before which all elements are smaller than it,
and after which all are greater than it.
Return the index of the element if there is such an element, otherwise, return -1.

Examples:
Input: arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9};
Output: 4
Explanation: All elements on left of arr[4] are smaller than it
and all elements on right are greater.
*/

// Check Function
bool check(int arr[], int Size, int index) {
    int i = index - 1;
    int j = index + 1;

    while(i>=0) {
        if(arr[i]>arr[index]) {
            return false;
        }
        i--;
    }
    while(j<Size) {
        if(arr[j]<arr[index]) {
            return false;
        }
        j++;
    }
    return true;
}

// Function to return the index
int findElement(int arr[], int n) {
    for(int i=1; i<n-1; i++) { // n = size array
        if(check(arr, n, i)) {
            return i;
        }
    }
    return -1; // Not match this pattern -> return -1
}

int main()
{
    int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9};
    int sizeArr = sizeof arr / sizeof arr[0];
    cout << "Index of the element is " << findElement(arr, sizeArr) << endl;

    return 0;
}
