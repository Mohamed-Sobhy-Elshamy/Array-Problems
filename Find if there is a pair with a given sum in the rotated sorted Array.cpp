#include <bits/stdc++.h>
using namespace std;
/*
Given an array arr[] of distinct elements size N that is sorted and then
rotated around an unknown point, the task is to check if the array has a pair with a given sum X.

Examples :
Input: arr[] = {11, 15, 6, 8, 9, 10}, X = 16
Output: true
Explanation: There is a pair (6, 10) with sum 16
Input: arr[] = {11, 15, 26, 38, 9, 10}, X = 45
Output: false
Explanation: There is no pair with sum 45.
*/

// pivot -> largest element
// نبدأ نجمع ع اصغر عنصر ف ال array
// greater than key -> r = (Size+r-1)%Size
// Smaller than key -> l = (l+1)%Size
bool pairInsortedRotated(int arr[], int Size, int key)
{
    // find a pivot element = largest
    int i;
    for(i=0; i<Size-1; i++) {
        if(arr[i] > arr[i+1])
            break;
    }
    // left of smallest element
    int left = (i+1) % Size;
    // right of largest element
    int right = i;

    while(left != right) {
        // if we find a pair
        if(arr[left] + arr[right] == key)
            return true;
        // less than
        if(arr[left] + arr[right] == key)
            left = (left+1) % Size;
        else
            right = (Size + right - 1) % Size;
    }
    return false;

}


int main()
{
    int arr[] = { 11, 15, 6, 8, 9, 10 };
    int element = 16;
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    // call function
    if(pairInsortedRotated(arr, sizeArr, element))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    // Output = true
    return 0;
}
