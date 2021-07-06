/*
Binary search is a widely used searching algorithm that requires the array to be sorted before search is applied.

The main idea behind this algorithm is to keep dividing the array in half (divide and conquer) until the element is found,
or all the elements are exhausted.

It works by comparing the middle item of the array with our target, if it matches, it returns true otherwise 
if the middle term is greater than the target, the search is performed in the left sub-array. 
If the middle term is less than the target, the search is performed in the right sub-array.

The prototype for binary search is : 

binary_search(startaddress, endaddress, key)
Parameters :
startaddress: the address of the first element of the array.
endaddress: the address of the next contiguous location of the last element of the array.
key: the target value which we have to search for.

Returns :
true if an element equal to key is found, else false.
*/

#include <iostream>
#include <algorithm>
using namespace std;

void showArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    //getting size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << endl;
    showArray(arr, n);

    cout << "Sorting..." << endl;
    sort(arr, arr + n);

    showArray(arr, n);

    //searching
    cout << "\nBinary_search(arr , arr + n, 5) == ";
    if (binary_search(arr, arr + n, 5))
        cout << "5 is present in the array :)" << endl;
    else
        cout << "5 is not present in the array :)" << endl;

    return 0;
}
/*
TEST CASE

10 9 8 7 6 5 4 3 2 1 
Sorting...
1 2 3 4 5 6 7 8 9 10

Binary_search(arr , arr + n, 5) == 5 is present in the array :)
*/
