#include <bits/stdc++.h>
using namespace std;
/*
Given an array arr of n elements that is first strictly increasing and
then maybe strictly decreasing, find the maximum element in the array.

Note: If the array is increasing then just print the last element will be the maximum value.

Example:
Input: array[]= {5, 10, 20, 15}
Output: 20
*/
int findPeak(int arr[], int Size) {
    if(Size == 0)
        return 0;
    if(arr[0] >= arr[1])
        return 0;
    if(arr[Size-1] >= arr[Size-2])
        return Size-1;

    for(int i=1; i<Size-1; i++) {
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
            return i;
        }
    }
    return 0;

}


int main()
{
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    cout << "Index of a peak point is : "
        << findPeak(arr, sizeArr) << endl;
    // Output = 2


    return 0;
}
