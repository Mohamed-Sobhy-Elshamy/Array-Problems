#include <bits/stdc++.h>
using namespace std;

// Using binary search
int binarySearch(int arr[], int low, int high, int key) {
    if(high < low)
        return -1;
    // Middle this array
    int mid = low+(high - low) / 2 ;
    if(key == arr[mid]){
        return mid;
    }
    if(key > arr[mid]){
        return binarySearch(arr, (mid+1), high, key);
    } else {
        return binarySearch(arr, low, (mid-1), key);
    }

}


int main()
{
    int arr[] = { 5, 6, 7, 8, 9, 10 };
    int sizeArr, elementForSearch;

    sizeArr = sizeof(arr) / sizeof(arr[0]);
    elementForSearch = 10;

    cout << "Index: " << binarySearch(arr, 0, sizeArr-1, elementForSearch);

    return 0;
}
