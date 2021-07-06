/*
QUESTION :: Remove all the elements except 1st and last elements from the DQ.
AIM :: Removing elements within a range 
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //display
    cout << "\nDQ == ";
    for (int ele : d)
        cout << ele << " ";
    cout << endl;

    deque<int>::iterator it1, it2;

    it1 = d.begin();
    it2 = d.end();
    it1++;
    it2--;

    cout << "\nErasing..." << endl;
    d.erase(it1, it2);

    //display
    cout << "\nDQ == ";
    for (int ele : d)
        cout << ele << " ";
    cout << endl;

    //using cbegin and cend method
    //The cbegin() method in deque is a function in C++ STL which returns an iterator pointing to the first element of the container.
    cout << "\nFirst element :: " << *d.cbegin() << endl; //get the iterator and dereference it
    cout << "Last element :: " << *d.rbegin() << endl;    //get the iterator and dereference it

    return 0;
}

/*
TEST CASE

DQ == 1 2 3 4 5 6 7 8 9 10

Erasing...

DQ == 1 10

First element :: 1
Last element :: 10
*/
