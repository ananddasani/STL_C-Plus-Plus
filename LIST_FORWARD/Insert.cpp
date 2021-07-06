/*
forward_list::insert_after() 
it is a builtin function in C++ STL which gives us a choice to insert elements at the position just after the element pointed by a given iterator in the forward list. 
The arguments in this function are copied at the desired position.

Syntax:
forward_list_name.insert_after(iterator position, element)
or,
forward_list_name.insert_after(iterator position, n, element)
or,
forward_list_name.insert_after(iterator position, itr1, itr2)
or,
forward_list_name.insert_after(iterator position, list)

*/

#include <iostream>
#include <list>
#include <forward_list>
using namespace std;

void showList(forward_list<int> l)
{
    for (int &ele : l)
        cout << ele << "  ";
    cout << endl;
}

int main()
{
    forward_list<int> l1 = {1, 2, 3, 4, 5};
    list<int> List = {6, 7, 8};

    cout << "\nL1 == ";
    showList(l1);

    //set iterator to the beginning
    auto it = l1.begin();

    //------------------------------- SYNTAX 1 ------------------------------------
    //inserting one single element
    cout << "\nSYNTAX 1 :: ";
    it = l1.insert_after(it, 100);
    showList(l1);

    it++;

    //inserting element 2 times
    cout << "\nSYNTAX 2 :: ";
    it = l1.insert_after(it, 2, 100);
    showList(l1);

    //inserting the whole list
    cout << "\nSYNTAX 3 :: ";
    it = l1.insert_after(it, List.begin(), List.end());
    showList(l1);

    //inserting multiple elements
    cout << "\nSYNTAX 4 :: ";
    it = l1.insert_after(it, {200, 300});
    showList(l1);

    return 0;
}

/*
TEST CASE

L1 == 1  2  3  4  5

SYNTAX 1 :: 1  100  2  3  4  5

SYNTAX 2 :: 1  100  2  100  100  3  4  5

SYNTAX 3 :: 1  100  2  100  100  6  7  8  3  4  5

SYNTAX 4 :: 1  100  2  100  100  6  7  8  200  300  3  4  5
*/
