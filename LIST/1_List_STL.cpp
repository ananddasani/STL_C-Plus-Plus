/*
Lists are sequence containers that allow non-contiguous memory allocation.

As compared to vector, list has slow traversal, but once a position has been found, insertion and deletion are quick.

Normally, when we say a List, we talk about doubly linked list. For implementing a singly linked list, we use forward list.
*/

#include <iostream>
#include <list>
using namespace std;

void showList(list<int> l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
        cout << *it << "  ";
    cout << endl;
}

int main()
{
    //---------------------------------- DECLARATION WAYS ------------------------------------------

    list<int> l1 = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << "\nL1 == ";
    showList(l1);

    //declare by some default value
    list<int> l2(10, 2); //10times 2
    cout << "\nL2 == ";
    showList(l2);

    //copy the list
    list<int> l3(l2);
    cout << "\nL3 == ";
    showList(l3);

    //---------------------------------- INSERTING n DELETING ELEMENTS ------------------------------------------

    //use pop and push as it is (Mostly same for all STL)
    cout << "\nPushing 100 at front and back..." << endl;
    l3.push_front(100);
    l3.push_back(100);

    cout << "L3 == ";
    showList(l3);

    cout << "\nPoping elements from front and back..." << endl;
    l3.pop_front();
    l3.pop_back();

    cout << "L3 == ";
    showList(l3);

    //---------------------------------- REVERSING n SORTING LIST ------------------------------------------
    cout << "\nSorting L1..." << endl;
    l1.sort();
    cout << "L1 == ";
    showList(l1);

    cout << "\nReversing L1..." << endl;
    l1.reverse();
    cout << "L1 == ";
    showList(l1);

    //---------------------------------- OTHER METHODS ------------------------------------------
    cout << "\nList L1 is empty or not ? " << l1.empty() << endl;

    return 0;
}

/*
TEST CASE

L1 == 10  9  8  7  6  5  4  3  2  1

L2 == 2  2  2  2  2  2  2  2  2  2

L3 == 2  2  2  2  2  2  2  2  2  2

Pushing 100 at front and back...
L3 == 100  2  2  2  2  2  2  2  2  2  2  100

Poping elements from front and back...
L3 == 2  2  2  2  2  2  2  2  2  2

Sorting L1...
L1 == 1  2  3  4  5  6  7  8  9  10

Reversing L1...
L1 == 10  9  8  7  6  5  4  3  2  1
*/
