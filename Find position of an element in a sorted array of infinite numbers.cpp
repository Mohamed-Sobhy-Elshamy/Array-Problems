#include <bits/stdc++.h>
using namespace std;
/*
Suppose you have a sorted array of infinite numbers,
how would you search an element in the array?
Source: Amazon Interview Experience####.
Since array is sorted, the first thing clicks into mind is binary search,
but the problem here is that we don’t know size of array.
If the array is infinite, that means we don’t have proper bounds to apply binary search.
So in order to find position of key, first we find bounds and then apply binary search algorithm.
Let low be pointing to 1st element and high pointing to 2nd element of array,
Now compare key with high index element,
->if it is greater than high index element then copy high index in low index and double the high index.
->if it is smaller, then apply binary search on high and low indices found.
*/

// Binary search
int binarySearch(int arr[], int left, int right, int key) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binarySearch(arr, left, mid - 1, key);
        return binarySearch(arr, mid + 1, right, key);
    }
    return -1;
}

// Function to find position
int findPos(int arr[], int key) {
    int low = 0, high = 1;
    int val = arr[0];
    int Size = 1; // => Initialize of size

    // Find high to do binary search
    while (val < key) {
        low = high; // Store previous high
        high = 2 * high; // Double high index

        // Check if high index goes out of bounds
        if (high >= Size) {
            high = Size - 1;
        }

        val = arr[high]; // Update new val
    }

    return binarySearch(arr, low, high, key);
}

int main() {
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    int answer = findPos(arr, 10);

    if (answer == -1) {
        cout << "Element not found :(" << endl;
    } else {
        cout << "Element found at index : " << answer << endl;
    }

    return 0;
}
