#include <bits/stdc++.h>
using namespace std;
/*
Given an array with all distinct elements,
find the largest three elements. Expected time complexity is O(n) and extra space is O(1).

Examples :
Input: arr[] = {10, 4, 3, 50, 23, 90}
Output: 90, 50, 23
*/

// Function
void printLargest(int arr[], int arrSize) {
    int first, second, third;
    // Validation
    if(arrSize < 2) {
        cout << "Invalid input " << endl;
        return ;
    }
    first = second = third = -1;
    for(int i=0; i<arrSize; i++) {
        // if current element greater than first
        if(arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i]>second && arr[i]!=first) { // if arr[i] is between first and second -> update second
            third = second;
            second = arr[i];
        } else if(arr[i]>third && arr[i]!=second && arr[i]!=third) {
            third = arr[i];
        }
    }
    // print the largest
    cout << "Three largest elements are : " << first
    << " " << second << " " << third << endl;
}


int main()
{
    int arr[] = { 12, 13, 1, 10, 34, 11, 34 };
    int Size = sizeof(arr) / sizeof(arr[0]);
    // call function
    printLargest(arr, Size);

    return 0;
}
