/*
Multisets are a type of associative containers similar to set, with an exception that multiple elements can have same values.
*/

#include <iostream>
#include <set>
using namespace std;

void showMS(multiset<int, greater<int>> ms)
{
    for (auto it = ms.begin(); it != ms.end(); it++)
        cout << *it << "  ";
    cout << endl;
}

int main()
{
    multiset<int, greater<int>> ms;

    //insert the elements
    for (int i = 1; i < 6; i++)
        ms.insert(i);

    //insert the duplicate elements
    ms.insert(3);
    ms.insert(5);

    cout << "\nMS = ";
    showMS(ms);

    cout << "\nSize of MS == " << ms.size();
    cout << "\nMax Size of MS == " << ms.max_size() << endl;

    auto begin = ms.begin();
    auto last = ms.end();
    cout << "\nFirst element == " << *begin;
    cout << "\nLast element == " << *last << endl;

    //printing in reverse order
    cout << "\n-------------------------------" << endl;
    cout << "MS == ";
    showMS(ms);

    cout << "Reverse printing..." << endl;
    cout << "MS == ";
    for (auto it = ms.rbegin(); it != ms.rend(); it++)
        cout << *it << "  ";
    cout << endl;

    return 0;
}

/*
TEST CASE

MS = 5  5  4  3  3  2  1  

Size of MS == 7
Max Size of MS == 107374182

First element == 5
Last element == 7

-------------------------------
MS == 5  5  4  3  3  2  1
Reverse printing...
1  2  3  3  4  5  5
*/
