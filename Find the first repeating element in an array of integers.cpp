#include <bits/stdc++.h>
using namespace std;
/*
Given an array of integers arr[], The task is to find the index of first repeating element in it i.e.
the element that occurs more than once and whose index of the first occurrence is the smallest.

Examples:
Input: arr[] = {10, 5, 3, 4, 3, 5, 6}
Output: 5
Explanation: 5 is the first element that repeats
*/

// Function
int repeatingElement(int arr[], int n) {
    // nested loop for check repeating element
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                return i;
            }
        }
    }

    // if not repeating
    return -1;
}


int main()
{
    int arr[] = { 10, 5, 3, 4, 3, 5, 6 };
    int Size = sizeof(arr) / sizeof(arr[0]);
    int Index = repeatingElement(arr, Size);

    if(Index = -1) {
        cout << "No repeating element found !" << endl;
    } else {
        cout << "First repeating element is = " << arr[Index] << endl;
    }


    return 0;
}
