#include <bits/stdc++.h>
using namespace std;
/*
 Given two sorted arrays, a[] and b[],
 the task is to find the median of these sorted arrays,
 where N is the number of elements in the first array,
 and M is the number of elements in the second array.

Examples:
Input: a[] = {-5, 3, 6, 12, 15}, b[] = {-12, -10, -6, -3, 4, 10}
Output: The median is 3.
Explanation: The merged array is: ar3[] = {-12, -10, -6, -5 , -3, 3, 4, 6, 10, 12, 15}.
So the median of the merged array is 3
*/
int solution(int arr[], int Size) {
    // if length of array is even
    if(Size%2 == 0) {
        int z = Size / 2;
        int e = arr[z];
        int q = arr[z - 1];
        int ans = (e + q) / 2;
        return ans;
    } else { // if length of array is odd
         int z = round(Size / 2);
         return arr[z];
    }
}


int main()
{
    int arr1[] = { -5, 3, 6, 12, 15 };
    int arr2[] = { -12, -10, -6, -3, 4, 10 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // new arr for merge
    int arr3[size1 + size2];
    int len = size1 + size2;
    // merge two array into one array
    for(int i=0; i<size1; i++) {
        arr3[i] = arr1[i];
    }

    int counter = 0;
    for(int j=size1; j<len; j++) {
        arr3[j] = arr2[counter++];
    }
    // sort new arr
    sort(arr3, arr3 + len);
    // call function -> solution
    cout << "Median is : " << solution(arr3, len) << endl;
    // Output => 3

    return 0;
}
