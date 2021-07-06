/*
Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.

They are similar to vectors, but are more efficient in case of insertion and deletion of elements. 
Unlike vectors, contiguous storage allocation may not be guaranteed.

Double Ended Queues are basically an implementation of the data structure double ended queue. 

A queue data structure allows insertion only at the end and deletion from the front. 
Double ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.

The functions for deque are same as vector, with an addition of push and pop operations for both front and back.
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    //----------------------------- INSERTING ELEMENT ----------------------------------

    //insertion at beginning and end
    d.push_back(10);
    d.push_front(5);
    d.push_back(15);
    d.push_back(20);

    //display the result
    cout << "\nD :: ";
    for (int i : d)
        cout << i << "  ";
    cout << endl;

    //----------------------------- REMOVING ELEMENT ----------------------------------

    //remove and element
    cout << "\nRemoving front element..." << endl;
    d.pop_front();

    cout << "Removing last element..." << endl;
    d.pop_back();

    //display the result
    cout << "\nD :: ";
    for (int i : d)
        cout << i << "  ";
    cout << endl;

    //----------------------------- ASSCESSING ELEMENT ----------------------------------

    //Asscessing elements
    cout << "\nElement at First index :: " << d.at(1) << endl;

    cout << "\nFirst element :: " << d.front() << endl;
    cout << "Last element :: " << d.back() << endl;

    //----------------------------- ERASING AND CLEARING ----------------------------------

    //Checking for empty
    cout << "\nDeque empty or not ? " << d.empty() << endl;

    /*
    erasing Syntax : 
    1. dequename.erase(position)
    2. dequename.erase(startingposition, endingposition)
    */
    cout << "\nBefore erase size == " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase size == " << d.size() << endl;

    //CLEAR
    //clear() function is used to remove all the elements of the deque container, thus making its size 0.
    cout << "\nBefore clearing Deque empty ? " << d.empty() << endl;
    d.clear();
    cout << "After clearing Deque empty ? " << d.empty() << endl;

    return 0;
}

/*
TEST CASE


D :: 5  10  15  20  

Removing front element...
Removing last element...

D :: 10  15

Element at First index :: 15

First element :: 10
Last element :: 15

Deque empty or not ? 0

Before erase size == 2
After erase size == 1

Before clearing Deque empty ? 0
After clearing Deque empty ? 1
*/
