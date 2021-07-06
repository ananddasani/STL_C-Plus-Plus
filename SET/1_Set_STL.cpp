/*
Sets are a type of associative containers in which each element has to be unique,
because the value of the element identifies it.

The value of the element cannot be modified once it is added to the set,
though it is possible to remove and add the modified value of that element.

*/

#include <iostream>
#include <set>
using namespace std;

void showSet(set<int, greater<int>> s)
{
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << "  ";
    cout << endl;
}

//Method overloading
void showSet(set<int> s)
{
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << "  ";
    cout << endl;
}

int main()
{
    //----------------------------- ASSIGNING ------------------------------

    //empty set container
    set<int, greater<int>> s;

    //------------------------------- INSERTION ---------------------------------

    //insert elements in totally reverse order using insert function
    for (int i = 1; i < 6; i++)
        s.insert(i * 10);

    //copy s1 to s2
    set<int> s2(s.begin(), s.end());

    //element will be sorted in decreasing order automatically
    cout << "\nS1 = ";
    showSet(s);

    cout << "\nS2 = ";
    showSet(s2);

    // ---------------------------------- ERASE ------------------------

    //remove all element upto 30 in s2
    cout << "\n--------------------------";
    cout << "\nRemoving all the element upto 30 form the s2" << endl;
    s2.erase(s2.begin(), s2.find(30));

    cout << "S2 = ";
    showSet(s2);

    //remove the perticular element form s2
    cout << "\nRemoving 30 form S2..." << endl;
    s2.erase(30);

    cout << "S2 = ";
    showSet(s2);

    //check for size, empty and clear
    cout << "\n-----------------------" << endl;
    cout << "Size of S1 = " << s.size() << endl;
    cout << "S1 is empty or not ? " << s.empty() << endl;

    cout << "\nClearing S1..." << endl;
    s.clear();
    cout << "S1 is empty or not ? " << s.empty() << endl;

    return 0;
}

/*
TEST CASE

S1 = 50  40  30  20  10

S2 = 10  20  30  40  50

--------------------------
Removing all the element upto 30 form the s2
S2 = 30  40  50

Removing 30 form S2...
S2 = 40  50

-----------------------
Size of S1 = 5
S1 is empty or not ? 0

Clearing S1...
S1 is empty or not ? 1
*/
