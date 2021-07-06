/*
sort means arranging the data in a particular fashion, which can be increasing or decreasing. 
There is a builtin function in C++ STL by the name of sort(). 

This function internally uses IntroSort. In more details it is implemented using hybrid of QuickSort, HeapSort and InsertionSort.
By default, it uses QuickSort but if QuickSort is doing unfair partitioning and taking more than N*logN time, 
it switches to HeapSort and when the array size becomes really small, it switches to InsertionSort. 

The prototype for sort is : 
sort(startaddress, endaddress)

startaddress: the address of the first element of the array
endaddress: the address of the next contiguous location of the last element of the array.

So actually sort() sorts in the 
range of [startaddress,endaddress)
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

    showArray(arr, n);

    cout << "Sorting..." << endl;
    sort(arr, arr + n);

    showArray(arr, n);

    return 0;
}

/*
TEST CASE

1 2 3 4 5 6 7 8 9 10 
Sorting...
1 2 3 4 5 6 7 8 9 10
*/
