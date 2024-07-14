#include <bits/stdc++.h>
using namespace std;

// Function
int findFrequency(int arr[], int Size, int left, int right, int element)
{
    int counter = 0;
    for(int i=left-1; i<=right; ++i) {
        if(arr[i] == element) {
            ++counter;
        }
    }
    return counter;

}

int main()
{
    int arr[] = {2, 8, 6, 9, 8, 6, 8, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // print frequency of 2 from position 1 to 6
    cout << "Frequency of 2 from position 1 to 6 " << findFrequency(arr, n, 1, 6, 2);


    return 0;
}
