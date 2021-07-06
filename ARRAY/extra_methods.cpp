//Program to demonstrate Array class's methods which is commonly used.
#include <iostream>
#include <array>
using namespace std;

int main()
{
    //swapping array
    array<int, 2> arr1;
    array<int, 2> arr2;

    //filling the array
    arr1.fill(10);
    arr2.fill(20);

    cout << "\n\tBefore swapping " << endl;
    cout << "Array 1 :: ";
    for (int i : arr1)
        cout
            << i << "  ";
    cout << endl;

    cout << "\nArray 2 :: ";
    for (int i : arr2)
        cout
            << i << "  ";
    cout << endl;

    arr1.swap(arr2);

    cout << "\n\tAfter swapping " << endl;
    cout << "Array 1 :: ";
    for (int i : arr1)
        cout
            << i << "  ";
    cout << endl;

    cout << "\nArray 2 :: ";
    for (int i : arr2)
        cout
            << i << "  ";
    cout << endl;

    return 0;
}
/*
        Before swapping 
Array 1 :: 10  10

Array 2 :: 20  20

        After swapping
Array 1 :: 20  20

Array 2 :: 10  10
*/
