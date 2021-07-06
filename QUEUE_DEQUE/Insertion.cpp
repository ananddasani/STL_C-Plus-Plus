/*
The deque::insert() function is a built-in function in C++ which is used to insert elements in the deque.
The insert() function can be used in three ways:

Extends deque by inserting a new element val at a position.
Extends deque by inserting n new element of value val in the deque.
Extends deque by inserting new element in the range [first, last).

Syntax:

deque_name.insert (iterator position, const value_type& val)
                or
deque_name.insert (iterator position, size_type n, const value_type& val)
                or
deque_name.insert (iterator position, InputIterator first, InputIterator last)


Parameters: 
The function accepts four parameters which are specified as below:

position – Specifies the position where the element/elements are to be inserted.
val – specifies the value to be assigned to newly inserted element.
n – specifies the number of elements to insert. Each element is initialized to a copy of val.
first, last – specifies the iterators specifying a range of elements which is to be inserted. The range includes all the elements between first and last, including the element pointed by first but not the one pointed by last.

Return value: The function returns an iterator that points to the first of the newly inserted elements.
*/

#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    deque<int> d = {1, 2, 3, 4, 5};

    //display the original deque
    cout << "\nDq :: ";
    for (int i : d)
        cout << i << "  ";
    cout << endl;

    //---------------------------------METHOD 1----------------------------
    //set iterator at 1st index
    deque<int>::iterator it = d.begin();
    //take iterator at next index
    it++;

    //insert
    it = d.insert(it, 6);

    //display the result
    cout << "\nMeth1 :: Dq :: ";
    for (int i : d)
        cout << i << "  ";
    cout << endl;

    //---------------------------------METHOD 2----------------------------
    //set iterator at the end
    deque<int>::iterator itr = d.end();

    //insert two times 10 at the place of iterator
    d.insert(itr, 2, 10);

    //display the result
    cout << "\nMeth2 :: Dq :: ";
    for (int i : d)
        cout << i << "  ";
    cout << endl;

    //---------------------------------METHOD 2----------------------------
    //inserting vector into the deque
    vector<int> v(2, 50);

    deque<int>::iterator it3 = d.begin();
    it3++;

    //insert
    d.insert(it3, v.begin(), v.end());

    //display the result
    cout << "\nMeth3 :: Dq :: ";
    for (it3 = d.begin(); it3 != d.end(); it3++)
        cout << *it3 << "  ";
    cout << endl;

    return 0;
}

/*
TEST CASE

Dq :: 1  2  3  4  5

Meth1 :: Dq :: 1  6  2  3  4  5

Meth2 :: Dq :: 1  6  2  3  4  5  10  10

Meth3 :: Dq :: 1  50  50  6  2  3  4  5  10  10
*/
