#include <bits/stdc++.h>
using namespace std;
/*
by shifting the elements. And in an unsorted array,
the insert operation is faster as compared to the sorted array because
we don’t have to care about the position at which the element is placed.
*/
int insertSorted(int arr[], int n, int key, int capacity) {
    if(n > capacity) {
        return n;
    }

    int i;
    for(i=n-1; (i>=0 && arr[i]>key); i--) {
        arr[i+1] = arr[i];
    }

    arr[i+1] = key;
    return (n+1);
}


int main()
{
    int arr[20] = { 12, 16, 20, 40, 50, 70 };
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, key = 26;

    // Before insertion
    for(i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    n = insertSorted(arr, n, key, capacity);
    // after insertion
    for(i=0; i<n; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;

    return 0;
}
