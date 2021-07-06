/*
set::lower_bound() 
it is a built-in function in C++ STL which returns an iterator pointing to the element in the container which is equivalent to k passed in the parameter

In case k is not present in the set container, the function returns an iterator pointing to the immediate next element which is just greater than k.
If the key passed in the parameter exceeds the maximum value in the container, then the iterator returned points to the element beyond last element in the set container that is set.end().
*/

#include <iostream>
#include <set>
using namespace std;

void showSet(set<int> s)
{
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << "  ";
    cout << endl;
}

int main()
{
    set<int> s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(40);
    s1.insert(50);
    s1.insert(60);

    cout << "\nS1 = ";
    showSet(s1);

    //---------------------------- LOWER BOUND -----------------------------

    //--------------------------------- check for 10.. --------------------------------------
    auto it = s1.lower_bound(10);

    //if 10 is not present then immediate next element will be returned
    if (it == s1.end())
        cout << "\n10 is largest element than all the element in set :(" << endl;
    else
        cout << "\nlower bound for 10 is :: " << *it << endl;

    //-------------------------------------- check for 30.. --------------------------------
    it = s1.lower_bound(30); // 30 is not present

    //if 10 is not present then immediate next element will be returned
    if (it == s1.end())
        cout << "\n30 is largest element than all the element in set :(" << endl;
    else
        cout << "\nlower bound for 30 is :: " << *it << endl;

    //---------------------------------- check for 100 -------------------------------------
    it = s1.lower_bound(100);

    //if 10 is not present then immediate next element will be returned
    if (it == s1.end())
        cout << "\n100 is largest element than all the element in set :(" << endl;
    else
        cout << "\nlower bound for 100 is :: " << *it << endl;

    return 0;
}

/*
TEST CASE

S1 = 10  20  40  50  60

lower bound for 10 is :: 10

lower bound for 30 is :: 40

100 is largest element than all the element in set :(
*/
