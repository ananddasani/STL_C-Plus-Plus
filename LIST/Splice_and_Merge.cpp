/*
1. list::merge() 
it is an inbuilt function in C++ STL which merges two sorted lists into one. 
The lists should be sorted in ascending order. 
If no comparator is passed in parameter, then it merges two sorted lists into a single sorted list. 
If a comparator is passed in the parameter, then it merges the list accordingly doing internal comparisons.

A. Syntax:
list1_name.merge(list2_name)

B. Syntax:
list1_name.merge(list2_name, comparator)

comparator – It is a binary predicate which takes two values of the same type that of those contained in the list,
returns true if the first argument is considered to go before the second in the strict weak ordering it defines, 
and false otherwise.


2. list::splice() 
it is a built-in function in C++ STL which is used to transfer elements from one list to another. 
The splice() function can be used in three ways:

Transfer all the elements of list x into another list at some position.
Transfer only the element pointed by i from list x into the list at some position.
Transfers the range [first, last) from list x into another list at some position.

Syntax:
list1_name.splice (iterator position, list2)
                or 
list1_name.splice (iterator position, list2, iterator i)
                or 
list1_name.splice (iterator position, list2, iterator first, iterator last)

-> position – Specifies the position where the elements are to be transfered.
-> list2 – It specifies a list object of the same type which is to be transfered.
-> i – It specifies an iterator to the position of an element in list2 which is to be transfered.
-> first, last – Iterators specifying a range of elements in list2 which is to be transferred in list1. 
    The range includes all the elements between first and last, including the element pointed by first but not the one pointed by last.
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
    list<int> l1 = {1, 2, 3, 4};
    list<int> l2 = {5, 6, 7, 8};

    //----------------------- MERGING --------------------------
    l2.merge(l1);

    cout << "\nMerging L1 and L2..." << endl;
    cout << "L2 = ";
    showList(l2);

    //----------------------- SPLICING --------------------------

    list<int> l3 = {9, 10};

    //transfer all element of l2 in l3
    cout << "\n------------------";
    cout << "\nL3 = ";
    showList(l3);

    cout << "Splicing l2 into l3..." << endl;
    l3.splice(l3.begin(), l2); // --> way 1

    cout << "L3 = ";
    showList(l3);

    //transfer single element
    // list<int>::iterator it;
    // it = l1.begin(); // 1;

    // cout << "\nSplicing l2's single element into l3..." << endl;
    // l3.splice(l3.end(), l2, it); // --> way 2

    // cout << "L3 = ";
    // showList(l3);

    //transfer a range
    list<int> l4 = {1, 2, 3, 4, 5};
    list<int> l5 = {6, 7, 8};
    list<int>::iterator it;
    it = l4.begin();

    //advance it by 2 position (points to 3 now)
    advance(it, 2);

    //transfer 3, 4, 5 at the beginning of l2
    l5.splice(l5.begin(), l4, it, l4.end());

    cout << "\nL5 after splicing operation = ";
    showList(l5);

    return 0;
}

/*
TEST CASE

Merging L1 and L2...
L2 = 1  2  3  4  5  6  7  8  

------------------
L3 = 9  10  
Splicing l2 into l3...
L3 = 1  2  3  4  5  6  7  8  9  10  

L5 after splicing operation = 3  4  5  6  7  8  
*/
