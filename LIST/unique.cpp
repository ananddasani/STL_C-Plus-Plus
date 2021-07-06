/*
list::unique() 
it is an inbuilt function in C++ STL which removes all duplicate consecutive elements from the list. 
It works only on sorted list.

Syntax: 
list_name.unique(BinaryPredicate name)

Parameters:  The function accepts a single and optional parameter which is a binary predicate that returns true 
if the elements should be treated as equal. It has following syntax: 

bool name(data_type a, data_type b);
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

//Method overloading
void showList(list<float> l)
{
    list<float>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
        cout << *it << "  ";
    cout << endl;
}

//binary predicate
bool compare(double a, double b) { return ((int)a == (int)b); }

int main()
{
    list<int> l = {5, 4, 3, 2, 1};

    cout << "\nL == ";
    showList(l);

    cout << "\nResizing L..." << endl;
    l.resize(8, 6);

    cout << "L == ";
    showList(l);

    //---------------------------- REMOVING DUPLICATE ELEMENTS --------------------------------
    cout << "\nSorting..." << endl;
    l.sort();

    cout << "L == ";
    showList(l);

    cout << "\nRemoving duplicate elements form L..." << endl;
    l.unique();

    cout << "L == ";
    showList(l);

    list<float> l2 = {1.1, 2.2, 3.3, 3.3, 4.4, 4.5, 5.5, 5.8};

    cout << "\n-----------------------" << endl;
    cout << "L2 == ";
    showList(l2);

    //this will only remove the exactly same value form the list
    cout << "L2.unique() == ";
    l2.unique();
    showList(l2);

    cout << "L2.unique(compare) == ";
    l2.unique(compare);
    showList(l2);

    return 0;
}

/*
TEST CASE

L == 5  4  3  2  1

Resizing L...
L == 5  4  3  2  1  6  6  6

Sorting...
L == 1  2  3  4  5  6  6  6

Removing duplicate elements form L...
L == 1  2  3  4  5  6

-----------------------
L2 == 1.1  2.2  3.3  3.3  4.4  4.5  5.5  5.8      
L2.unique() == 1.1  2.2  3.3  4.4  4.5  5.5  5.8  
L2.unique(compare) == 1.1  2.2  3.3  4.4  5.5    
*/
