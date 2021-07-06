/*
                                deque::operator=
This operator is used to assign new contents to the container by replacing the existing contents.
It also modifies the size according to the new contents.

Syntax :
dequename1 = (dequename2)

Result :
Assign the contents of the container passed as 
parameter to the container written on left side of the operator.

                                deque::operator[]
This operator is used to reference the element present at position given inside the operator. 
It is similar to the at() function, the only difference is that the at() function throws an out-of-range exception 
when the position is not in the bounds of the size of deque, while this operator causes undefined behaviour.

Syntax:
dequename[position]

Returns :
Direct reference to the element at the given position.
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d1 = {1, 2, 3, 4, 5};
    deque<int> d2 = {6, 7, 8, 9, 10};

    //display
    cout << "\nD1 :: ";
    for (auto it = d1.begin(); it != d1.end(); it++)
        cout << *it << "  ";
    cout << endl;

    cout << "D2 :: ";
    for (auto it = d1.begin(); it != d1.end(); it++)
        cout << *it << "  ";
    cout << endl;

    //using = operator
    cout << "\nD1 = D2." << endl;
    d1 = d2;

    //display
    cout << "\nD1 :: ";
    for (auto it = d1.begin(); it != d1.end(); it++)
        cout << *it << "  ";
    cout << endl;

    cout << "D2 :: ";
    for (auto it = d1.begin(); it != d1.end(); it++)
        cout << *it << "  ";
    cout << endl;

    //[] vs at
    cout << "\nD2[10] == " << d2[10] << endl; // --> GIVES UNDEFINED BEHAVIOUR
    cout << "D.at(10) " << d2.at(10) << endl; // --> GIVES ERROR

    return 0;
}

/*
TEST CASE

D1 :: 1  2  3  4  5  
D2 :: 1  2  3  4  5

D1 = D2.

D1 :: 6  7  8  9  10
D2 :: 6  7  8  9  10  

D2[10] == 724183336
D.at(10) terminate called after throwing an instance of 'std::out_of_range'
  what():  deque::_M_range_check: __n (which is 10)>= this->size() (which is 5)
*/
