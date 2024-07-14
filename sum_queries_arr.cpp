#include <bits/stdc++.h>
using namespace std;
/*
Given an array arr of integers of size n. We need to compute the sum of elements from index i to index j.
The queries consisting of i and j index values will be executed multiple times.
*/

// function
int rangeSum(int arr[], int n, int i, int j)
{
    int sum = 0;
    for(int k=i; k<=j; k++) {
        sum += arr[k];
    }
    return sum;
}


int main()
{
    int arr[] = { 1,2,3,4,5 };
    int Size = sizeof(arr) / sizeof(arr[0]);

    int i, j;
    cout << "Enter your Queries please : " ;
    cin >> i >> j;
    // function call
    cout << rangeSum(arr, Size, i, j) << endl;


    return 0;
}
