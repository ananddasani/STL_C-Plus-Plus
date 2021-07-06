/*
Program to demonstrate working of vector STL

                    WHAT IS VECTOR 
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, 
with their storage being handled automatically by the container. 

Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

In vectors, data is inserted at the end.


                    TIME COMPLEXITY
Inserting at the end takes differential time, as sometimes there may be a need of extending the array.
Removing the last element takes only constant time because no resizing happens.
Inserting and erasing at the beginning or in the middle is linear in time.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //---------------------------------- DECLARATION WAYS ------------------------------------------

    vector<int> v; //simple declaration

    //vector will be of size and 5 and all 5 elements will be 2 by default
    vector<int> vOfSpecificSize(5, 2);

    cout << "\nVector of specific size and default value " << endl;
    for (int ele : vOfSpecificSize)
        cout << ele << "\t";
    cout << endl;

    //copying the vector into new vector
    vector<int> copiedV(vOfSpecificSize);

    cout << "Copy of above vector " << endl;
    for (int ele : copiedV)
        cout << ele << "\t";
    cout << endl;

    //---------------------------- SIZE IS GETTING DOUBLE UP EVERYTIME ------------------------------------

    //Capacity == total how many elements can be allocated at this instance of size
    //Size == total size of vector

    cout << "\nInitially" << endl;

    cout << "Capacity == " << v.capacity() << endl;
    cout << "Size == " << v.size() << endl;
    cout << endl;

    //insert 1 element
    cout << "Pushing one element..." << endl;
    v.push_back(1);

    cout << "Capacity == " << v.capacity() << endl;
    cout << "Size == " << v.size() << endl;
    cout << endl;

    //insert 2nd element
    cout << "Pushing second element..." << endl;
    v.push_back(2);

    cout << "Capacity == " << v.capacity() << endl;
    cout << "Size == " << v.size() << endl;
    cout << endl;

    //insert 3rd element
    cout << "Pushing third element..." << endl;
    v.push_back(3);

    //here size is 3 but capacity is increased to 4, so vector everytime double up itself when there is  need of extension.
    cout << "Capacity == " << v.capacity() << endl;
    cout << "Size == " << v.size() << endl;
    cout << endl;

    //--------------------------------- RETRIVING ELEMENTS ----------------------------------------

    //retriving element form the verctor
    cout << "Element at 2nd index :: " << v.at(2) << endl;

    //getting front and back element
    cout << "\nLast element :: " << v.back() << endl;
    cout << "Front element :: " << v.front() << endl;

    //pop out the last element like push back
    cout << "\nDeleting last element" << endl;
    v.pop_back();

    for (int e : v)
        cout << e << "\t";
    cout << endl;

    //------------------------------- CLEAR AND ERASE -------------------------------------------

    //Here Capacity will be as it is only size (allocated memory to elements will be deleted )
    cout << "\nClearing the vector " << endl;
    v.clear();
    cout << "Size of vector ==  " << v.size() << endl;

    return 0;
}

/*
TEST CASE

Vector of specific size and default value 
2       2       2       2       2
Copy of above vector
2       2       2       2       2

Initially
Capacity == 0
Size == 0

Pushing one element...
Capacity == 1
Size == 1

Pushing second element...
Capacity == 2
Size == 2

Pushing third element...
Capacity == 4
Size == 3

Element at 2nd index :: 3

Last element :: 3
Front element :: 1

Deleting last element
1       2

Clearing the vector
Size of vector ==  0
*/
