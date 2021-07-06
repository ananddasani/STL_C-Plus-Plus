/*
1. list::remove() 
it is a built-in function in C++ STL which is used to remove elements from a list container.
It takes a value as the parameter and removes all the elements from the list container whose value is equal to the value passed in the parameter of the function.

Syntax:
list_name.remove(val) 

2. list::remove_if()

remove_if() function is used to remove all the values from the list that correspond true to the predicate 
or condition given as parameter to the function. 
The function iterates through every member of the list container and removes all the element that return true for the predicate.

Syntax :
listname.remove_if(predicate)

Result :
Removes all the elements of the container
which return true for the predicate.

3. list::resize() 
it is a built-in function in C++ STL which is used to resize a list container. 
It takes a number n as parameter and resizes the list container to contain exactly n elements.

If the list already has more than n elements, then the function erases the elements from the list except the first n element.
If the list contains less than n elements, then the function adds the difference number of elements to the list with their default values.
The function also accepts a parameter val, if this parameter is specified and the number of elements in the list container is less than n 
    then the function adds elements to the list with their value assigned to val.

Syntax:
list_name.resize(int n, value_type val)

n : This parameter specifies the number of elements upto which the list is needed to be resized.
val: This is an optional parameter and if it is specified and the list contains less than n elements 
    then the function will add elements to the list with their value assigned to val.

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

//Predicate function
bool even(const int &n) { return (n % 2) == 0; }

int main()
{
    //---------------------------- REMOVE --------------------------------
    list<int> l1 = {10, 15, 20, 25, 30};
    l1.push_front(5);
    l1.push_back(5);

    cout << "\nL1 == ";
    showList(l1);

    //Remove an element 5 form the list
    cout << "\nRemoving 5..." << endl;
    l1.remove(5); // --> all the instance of 5 will be removed form the list

    cout << "L1 == ";
    showList(l1);

    //---------------------------- REMOVE IF--------------------------------
    list<int> l2 = {1, 2, 3, 4, 5};

    cout << "\n------------------------";
    cout << "\nL2 == ";
    showList(l2);

    cout << "\nRemoving even numbers from L2..." << endl;
    l2.remove_if(even);

    cout << "L2 == ";
    showList(l2);

    //---------------------------- REVERSE LIST --------------------------------
    cout << "\nReversing L2..." << endl;
    l2.reverse();

    cout << "L2 == ";
    showList(l2);

    //---------------------------- SORTING LIST --------------------------------
    cout << "\nSorting L2..." << endl;
    l2.sort();

    cout << "L2 == ";
    showList(l2);

    //---------------------------- RESIZING LIST --------------------------------
    list<int> l3 = {10, 20, 30, 40};

    cout << "\n------------------------";
    cout << "\nL3 == ";
    showList(l3);

    //resize list to contain less element
    cout << "\nResizing L3 form 4 to 2...";
    l3.resize(2);

    cout << "\nL3 == ";
    showList(l3);

    //resize again to 4
    cout << "\nResizing L3 form 2 to 4...";
    l3.resize(4);

    cout << "\nL3 == ";
    showList(l3);

    //resize to more with default element
    cout << "\nResizing L3 from 4 to 7 with default value to 100..." << endl;
    l3.resize(7, 100);

    cout << "\nL3 == ";
    showList(l3);

    //---------------------------- CLEARING LIST L2 --------------------------------
    cout << "\nBefore clearing L2 (empty or not) ? " << l2.empty() << endl;
    cout << "clearing L2...";
    l2.clear();
    cout << "\nAfter clearing L2 (empty or not) ? " << l2.empty() << endl;

    //-----------------------------  =  OPERATOR -----------------------------------
    cout << "\nL2 = ";
    showList(l2);

    cout << "L2 = L1" << endl;
    l2 = l1;

    cout << "L2 = ";
    showList(l2);

    return 0;
}

/*

TEST CASE

L1 == 5  10  15  20  25  30  5  

Removing 5...
L1 == 10  15  20  25  30  

------------------------
L2 == 1  2  3  4  5  

Removing even numbers from L2...
L2 == 1  3  5  

Reversing L2...
L2 == 5  3  1  

Sorting L2...
L2 == 1  3  5  

------------------------
L3 == 10  20  30  40  

Resizing L3 form 4 to 2...
L3 == 10  20  

Resizing L3 form 2 to 4...
L3 == 10  20  0  0  

Resizing L3 from 4 to 7 with default value to 100...

L3 == 10  20  0  0  100  100  100  

Before clearing L2 (empty or not) ? 0
clearing L2...
After clearing L2 (empty or not) ? 1

L2 =
L2 = L1
L2 = 10  15  20  25  30  

*/
