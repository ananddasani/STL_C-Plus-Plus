/*
forward_list::before_begin() 
it is an inbuilt function in CPP STL which returns a iterator which points t the position before the first element of the forward_list.

Syntax:
forwardlist_name.before_begin()
*/

#include <iostream>
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
    forward_list<int> l1 = {20, 30, 40, 50};

    cout << "\nL1 == ";
    showList(l1);

    //insertion at the beginning
    auto it = l1.before_begin();

    cout << "\nInserting at the beginning of list..." << endl;
    l1.insert_after(it, 10);

    cout << "L1 == ";
    showList(l1);

    return 0;
}

/*
TEST CASE

L1 == 20  30  40  50  

Inserting at the beginning of list...
L1 == 10  20  30  40  50
*/
