/*
Forward list in STL implements singly linked list. 
forward list are more useful than other containers in insertion, removal and moving operations (like sort) and allows time constant insertion and removal of elements. 

it differs from list by the fact that forward list keeps track of location of only next element while list keeps track to both next and previous elements, 
thus increasing the storage space required to store each element. 

The drawback of forward list is that it cannot be iterated backwards and its individual elements cannot be accessed directly. 

Forward List is preferred over list when only forward traversal is required (same as singly linked list is preferred over doubly linked list) as we can save space. 
Some example cases are, chaining in hashing, adjacency list representation of graph, etc.
*/

#include <iostream>
#include <forward_list>
using namespace std;

//predicate function
bool even(const int &n) { return (n % 2 == 0); }

void showList(forward_list<int> l)
{
    //Display way 1
    // forward_list<int>::iterator it;
    // it = l.begin();
    // for (it = l.begin(); it != l.end(); it++)
    //     cout << *it << "  ";
    // cout << endl;

    //Display way 2
    for (int &ele : l)
        cout << ele << "  ";
    cout << endl;
}

int main()
{
    forward_list<int> l1, l2;

    //------------------------- ASSIGNING VALUES ------------------------------------------
    l1.assign({1, 2, 3}); // assigning different values

    cout << "\nL1 == ";
    showList(l1);

    l2.assign(5, 10); //assigning 5 times 10

    cout << "\nL2 == ";
    showList(l2);

    cout << "\npush_front(5) == ";
    l2.push_front(5);
    showList(l2);

    cout << "\npop_front() == ";
    l2.pop_front();
    showList(l2);

    //--------------------------- ERASING ELEMENTS --------------------------------------------

    //clearing the list
    l1.clear();

    //insert elements
    for (int i = 1; i <= 5; i++)
        l1.push_front(i * 10);

    cout << "\n-------------------------------" << endl;
    cout << "L1 == ";
    showList(l1);

    cout << "Sorting L1..." << endl;
    l1.sort();
    cout << "L1 == ";
    showList(l1);

    //erase way 1;
    cout << "\nErasing single element after 2nd index..." << endl;
    auto it = l1.begin();
    it++;
    l1.erase_after(it);

    cout << "L1 = ";
    showList(l1);

    //erase way 2;
    it = l1.begin();
    auto it2 = l1.end();

    cout << "\nErasing element in range..." << endl;
    l1.erase_after(it, it2);

    cout << "L1 == ";
    showList(l1);

    //------------------------------------- REMOVING ELEMENT ----------------------------
    cout << "\n-----------------------------" << endl;
    cout << "L2 == ";
    showList(l2);

    //remove a single element
    cout << "Removing single element..." << endl;
    l2.push_front(100);
    l2.remove(10);

    cout << "L2 == ";
    showList(l2);

    //remove if element is even
    l2.push_front(75);
    l2.push_front(50);
    l2.push_front(45);
    l2.push_front(30);

    cout << "\n-----------------------------" << endl;
    cout << "L2 == ";
    showList(l2);

    cout << "Removing all the even element..." << endl;
    l2.remove_if(even);

    cout << "L2 == ";
    showList(l2);

    //----------------------------------- SPLICING -----------------------------
    cout << "\n-----------------------------" << endl;
    cout << "L1 == ";
    showList(l1);
    cout << "L2 == ";
    showList(l2);

    cout << "\nSplicing L1 into L2..." << endl;
    l2.splice_after(l2.begin(), l1);

    cout << "L2 == ";
    showList(l2);

    return 0;
}

/*
TEST CASE

L1 == 1  2  3  

L2 == 10  10  10  10  10

push_front(5) == 5  10  10  10  10  10

pop_front() == 10  10  10  10  10

-------------------------------
L1 == 50  40  30  20  10
Sorting L1...
L1 == 10  20  30  40  50

Erasing single element after 2nd index...
L1 = 10  20  40  50

Erasing element in range...
L1 == 10  

-----------------------------
Removing single element...
L2 == 100

-----------------------------
L2 == 30  45  50  75  100
Removing all the even element...
L2 == 45  75

-----------------------------
L1 == 10
L2 == 45  75

Splicing L1 into L2...
L2 == 45  10  75
*/
