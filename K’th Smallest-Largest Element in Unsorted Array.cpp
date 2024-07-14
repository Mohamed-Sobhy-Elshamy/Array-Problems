#include <bits/stdc++.h>
using namespace std;
/*
Given an array arr[] of size N and a number K,
where K is smaller than the size of the array.
Find the K’th smallest element in the given array. Given that all array elements are distinct.

Examples:
Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 3
Output: 7

Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 4
Output: 10
*/
int kthSmallest(int arr[], int Size, int k) {
    sort(arr, arr+Size);
    // return the element
    return arr[k-1];

}


int main()
{
    // Using sorting algorithm
    int arr[] = { 12, 3, 5, 7, 19 };
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << "K'th smallest element is "
        << kthSmallest(arr, sizeArr, k) << endl;



    return 0;
}
