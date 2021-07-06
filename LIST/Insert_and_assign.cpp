/*
-------------------------------------- ASSIGN -----------------------------------------------
The list::assign() is a built-in function in C++ STL which is used to assign values to a list. 
It can also be used to copy elements from one list to another.

1. To assign elements to a list.
Syntax:
list_name.assign(count, value) 

2. To copy elements from an existing list to a new list.
Syntax:
first_list.assign(second_list.begin(), second_list.end());

Parameters: This function accepts two parameter as shown in the above syntax. 
The first parameter is the beginning iterator of the second list and second parameter is the ending iterator of the second list.

---------------------------------- INSERT ---------------------------------------------------
The list::insert() is used to insert the elements at any position of list.

This function takes 3 elements, position, number of elements to insert and value to insert.
If not mentioned, number of elements is default set to 1.

Syntax:
insert(pos_iter, ele_num, ele)
Parameters: This function takes in three parameters:

pos_iter: Position in the container where the new elements are inserted.
ele_num: Number of elements to insert. Each element is initialized to a copy of val.
ele: Value to be copied (or moved) to the inserted elements.

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
    //---------------------------------- ASSIGNING ELEMENTS ------------------------------------------

    list<int> l1;
    cout << "\nAssigning 5 times 500 to the list :)" << endl;
    l1.assign(5, 500);

    cout << "L1 == ";
    showList(l1);

    //---------------------------------- COPYING ELEMENTS  ------------------------------------------

    list<int> l2;
    cout << "\nCopying data of L1 to L2 using assign function..." << endl;
    l2.assign(l1.begin(), l1.end());

    cout << "L2 == ";
    showList(l2);

    //---------------------------------- INSERTING ELEMENTS  ------------------------------------------

    list<int> l3 = {10, 20, 40, 50};

    cout << "\nL3 == ";
    showList(l3);

    //insert the single element
    list<int>::iterator it, it2;
    it = l3.begin();

    //iterator to point to 3rd position
    advance(it, 2);

    //insert 30 at the it position
    cout << "\nInserting single element 30 at 3rd position..." << endl;
    l3.insert(it, 30); // --> WAY 1

    cout << "L3 == ";
    showList(l3);

    //advance it to last position
    it2 = l3.begin();
    advance(it2, l3.size());

    //insert multiple element at the it position using insert function
    cout << "\nInserting 100 3 times at the end of list..." << endl;
    l3.insert(it2, 3, 100); // --> WAY 2

    cout << "L3 == ";
    showList(l3);

    return 0;
}

/*
TEST CASE

Assigning 5 times 500 to the list :)
L1 == 500  500  500  500  500

Copying data of L1 to L2 using assign function...
L2 == 500  500  500  500  500

L3 == 10  20  40  50

Inserting single element 30 at 3rd position...   
L3 == 10  20  30  40  50

Inserting 100 3 times at the end of list...      
L3 == 10  20  30  40  50  100  100  100

*/
