/*
Program to demonstrate working of iterator in vector

Iterators

begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
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

    //Checking vector capacity by different ways
    cout << "\n-----------------------------------------" << endl;

    cout << "Using begin() and end() :: ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << "\t";
    cout << endl;

    cout << "\nUsing cbegin() and cend() :: ";
    for (auto i = v.cbegin(); i != v.cend(); i++)
        cout << *i << "\t";
    cout << endl;

    cout << "\nUsing rbegin() and rend() :: ";
    for (auto i = v.rbegin(); i != v.rend(); i++)
        cout << *i << "\t";
    cout << endl;

    cout << "\nUsing crbegin() and crend() :: ";
    for (auto i = v.crbegin(); i != v.crend(); i++)
        cout << *i << "\t";
    cout << endl;

    return 0;
}

/*
TEST CASE 

V :: 10 20      30      40      50

-----------------------------------------
Using begin() and end() :: 10   20      30      40      50

Using cbegin() and cend() :: 10 20      30      40      50

Using rbegin() and rend() :: 50 40      30      20      10

Using crbegin() and crend() :: 50       40      30      20      10
*/
