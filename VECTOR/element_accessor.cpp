//Program to demonstrate various ways to access elements in vector
/*
Program to demonstrate various modifiers in Vector STL

reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    //fill up the vector
    for (int i = 1; i <= 5; i++)
        v.push_back(i * 10);

    //display the vector
    cout << "\nV :: ";
    for (int e : v)
        cout << e << "\t";
    cout << endl;

    //Accessing vector elements by different ways
    cout << "\n-----------------------------------------" << endl;
    cout << "Reference Operator :: " << v[2] << endl;

    cout << "\nAt Operator :: " << v.at(2) << endl;

    cout << "\nFirst element :: " << v.front() << endl;

    cout << "\nLast element :: " << v.back() << endl;
    cout << "-----------------------------------------" << endl;

    //getting pointer of the element
    int *ptr = v.data();
    cout << "\nFirst element by pointer :: " << *ptr << endl;

    cout << "\nSecond element by pointer :: " << *(ptr + 1) << endl;

    return 0;
}

/*
TEST CASE

V :: 10 20      30      40      50

-----------------------------------------
Reference Operator :: 30

At Operator :: 30

First element :: 10

Last element :: 50
-----------------------------------------

First element by pointer :: 10

Second element by pointer :: 20
*/
