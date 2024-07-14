#include <bits/stdc++.h>
using namespace std;
/*
Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.

Examples :
Input: arr[] = {0, -1, 2, -3, 1}
Output: (0 -1 1), (2 -3 1)
*/
void findTriplets(int arr[], int Size) {
    bool found = false;

    for(int i=0; i<Size-2; i++) {
        for(int j=i+1; j<Size-1; j++) {
            for(int k=j+1; k<Size; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    cout << arr[i] << " " << arr[j] << " "
                        << arr[k] << endl;
                    found = true;
                }
            }
        }
    }
    if(found == false) {
        cout << " not exist " << endl;
    }
}


int main()
{
    int arr[] = { 0, -1, 2, -3, 1 };
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    findTriplets(arr, sizeArr);


    return 0;
}
