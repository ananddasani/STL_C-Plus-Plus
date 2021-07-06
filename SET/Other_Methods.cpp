/*
set::count() 
it is a built-in function in C++ STL which returns the number of times an element occurs in the set. 
It can only return 1 or 0 as the set container contains unique elements only. 

set::emplace_hint()
it is a built-in function in C++ STL which inserts a new element in the set.

A position is passed in the parameter of the function which acts as a hint from where the searching operation starts before inserting the element at its current position. 
The position only helps the process to get faster, it does not decide where the new element is to be inserted. 
The new element is inserted following the property of the set container only.

Syntax:
set_name.emplace_hint(iterator position, value) 

*/

#include <iostream>
#include <set>
using namespace std;

void showSet(set<int> s)
{
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << "  ";
    cout << endl;
}

int main()
{
    //--------------------------------------- INSERT ---------------------------------
    set<int> s1;

    //fill up the set
    for (int i = 1; i <= 5; i++)
        s1.insert(i); // --> way 1

    cout << "\nS1 == ";
    showSet(s1);

    set<int> s2(s1.find(3), s1.end()); //--> way 2

    cout << "S2 == ";
    showSet(s2);

    //------------------------------------- COUNT ---------------------------------------

    cout << "\n---------------------------------------";
    cout << "\nChecking if 5 present in S2..." << endl;
    cout << "Present or not ? " << s2.count(5) << endl;
}

/*
TEST CASE


S1 == 1  2  3  4  5  
S2 == 3  4  5  

---------------------------------------
Checking if 5 present in S2...
Present or not ? 1
*/
