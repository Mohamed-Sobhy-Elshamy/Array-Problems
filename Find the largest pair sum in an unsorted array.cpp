#include <bits/stdc++.h>
using namespace std;
/*
Given an unsorted of distinct integers, find the largest pair sum in it.
For example, the largest pair sum in {12, 34, 10, 6, 40} is 74.
-> 34 + 40
*/
int findLargestSumPair(int arr[], int n) {
    int maxSum = INT_MIN;

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            int sum = arr[i] + arr[j];
            if(sum > maxSum)
                maxSum = sum;
        }
    }
    return maxSum;
}

int main()
{
    int arr[] ={ 12, 34, 10, 6, 40 };
    int Size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max pair sum is " << findLargestSumPair(arr, Size) << endl;



    return 0;
}
