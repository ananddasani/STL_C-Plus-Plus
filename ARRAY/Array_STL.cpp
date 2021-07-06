//program to demonstrate the function and working of array STL

#include <iostream>
#include <array> // for using array STL
using namespace std;

int main()
{
    // BASIC ARRAY
    // int arr[] = {1,2,3,4,5}

    //---------------------------------- DECLARATION WAYS ------------------------------------------

    array<int, 4> arr = {1, 2, 3, 4};

    //---------------------------------- OTHER METHODS ------------------------------------------

    //get size of array
    cout << "\nSize of Array is => " << arr.size() << endl;

    //display array
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";

    //check array is empty or not ?
    cout << "\n\nEmpty or not ? " << arr.empty() << endl;

    //retrive fist and last element
    cout << "\nFirst element :: " << arr.front() << endl;
    cout << "Last element :: " << arr.back() << endl;

    return 0;
}

/*
TEST CASE

Size of Array is => 4
1       2       3       4

Empty or not ? 0

First element :: 1
Last element :: 4
*/
