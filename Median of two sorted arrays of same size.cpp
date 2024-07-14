#include <bits/stdc++.h>
using namespace std;
/*
Hard *
Median of two sorted arrays of same size
There are 2 sorted arrays A and B of size n each.
Write an algorithm to find the median of the array obtained
after merging the above 2 arrays(i.e. array of length 2n). The complexity should be O(log(n))
Note: Since the size of the set for which we are looking for the median is even (2n),
we need to take the average of the middle two numbers and return the floor of the average.

Example:
input: ar1[] = { 1,12,15,26,38 }
ar1[] = { 2,13,17,30,45 }
output : 16
*/
double getMedian(int arr1[], int arr2[], int Size) {
    // current indexes of arr1 and arr2
    int i=0;
    int j=0;
    int counter;
    int m1=-1, m2=-1;

    for(counter=0; counter<=Size; counter++) {
        if(i == Size) {
            m1 = m2;
            m2 = arr2[0];
            break;
        } else if (j == Size) {
            m1 = m2;
            m2 = arr1[0];
            break;
        }
        // equals sign
        if(arr1[i] <= arr2[j]) {
            m1 = m2; // Store the previous value of m2
            m2 = arr1[i];
            i++;
        } else {
            m1 = m2; // Store the previous value of m2
            m2 = arr2[j];
            j++;
        }
    }
    return (1.0 * (m1 + m2)) / 2;

}

int main()
{
    // simple count while merging
    int ar1[] = {1, 12, 15, 26, 38};
    int ar2[] = {2, 13, 17, 30, 45};
    int Size1 = sizeof(ar1) / sizeof(ar2[0]);
    int Size2 = sizeof(ar2) / sizeof(ar2[0]);

    if(Size1 == Size2) {
        cout << "Median is : " << getMedian(ar1, ar2, Size1);
    } else {
        cout << "Does not work for arrays "
            << "of unequal size" << endl;
    }

    // output = 16


    return 0;
}
