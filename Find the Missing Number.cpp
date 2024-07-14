#include <bits/stdc++.h>
using namespace std;
/*
Given an array arr[] of size N-1 with integers in the range of [1, N],
the task is to find the missing number from the first N integers.

Note: There are no duplicates in the list.

Examples:
Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
Output: 5
Explanation: Here the size of the array is 7, so the range will be [1, 8].
The missing number between 1 to 8 is 5
*/

// Function
void findMissing(int arr[], int N) {
    int i;
    int temp[N+1];

    for(int i=0; i<=N; i++) {
        temp[i] = 0;
    }

    for(i = 0; i < N; i++){
      temp[arr[i] - 1] = 1;
    }

    int res;
    for(i=0; i<=N; i++) {
        if(temp[i] == 0) {
            res = i+1;
        }
    }
    cout << res;
}


int main()
{
    int arr[] = { 1, 3, 7, 5, 6, 2 };
    int Size = sizeof(arr) / sizeof(arr[0]);

    findMissing(arr, Size);

    return 0;
}
