#include <bits/stdc++.h>
using namespace std;

/*
Given an unsorted array of size n. Array elements are in the range of 1 to n.
One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.

Examples:
Input: arr[] = {3, 1, 3}
Output: Missing = 2, Repeating = 3
*/

void printTwoElements(int arr[], int Size) {
    int temp[Size] = {0};
    int repeatingNumber = -1;
    int missingNumber = -1;

    // repeating number
    for(int i=0; i<Size; i++) {
        temp[arr[i]-1]++;
        if(temp[arr[i]-1] > 1) {
            repeatingNumber = arr[i];
        }
    }
    // missing number
    for(int i=0; i<Size; i++) {
        if(temp[i] == 0) {
            missingNumber = i+1;
            break;
        }
    }

    // print
    cout << "The repeating number is " << repeatingNumber << endl;
    cout << "The missing number is " << missingNumber << endl;


}

int main()
{
    // Using count array
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr, sizeArr);



    return 0;
}
