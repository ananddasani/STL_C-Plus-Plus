/*
Modifiers:

assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    //fill up the vector
    for (int i = 1; i <= 5; i++)
        v.push_back(i * 10);

    //display the vector
    cout << "\nV :: ";
    for (int e : v)
        cout << e << "  ";
    cout << endl;

    //Modifying vector elements by different ways
    cout << "-----------------------------------------" << endl;

    //fill vector with 10 five times
    v.assign(5, 10);

    cout << "\nV :: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << "  ";
    cout << endl;

    //insert 5 at beginning
    cout << "\nInserting 5 at beginning " << endl;
    v.insert(v.begin(), 5);
    cout << "First element :: " << v[0] << endl;

    //Remove that 5
    cout << "\nRemoving / erasing first element" << endl;
    v.erase(v.begin());
    cout << "First element :: " << v[0] << endl;

    //inserts at beginning
    cout << "\nEmplacing at beginning " << endl;
    v.emplace(v.begin(), 5);
    cout << "First element :: " << v[0] << endl;

    cout << "\nEmplacing at the end" << endl;
    v.emplace_back(100);
    int n = v.size();
    cout << "Last element :: " << v[n - 1] << endl;

    //erasing vector
    v.clear();
    cout << "\nVector size after clear() :: " << v.size() << endl;
    cout << "-----------------------------------------" << endl;

    //swapping in vector
    cout << "\nSwapping Vectors." << endl;
    vector<int> v1, v2;

    v1.push_back(10);
    v1.push_back(20);

    v2.push_back(30);
    v2.push_back(40);

    cout << "\n\tBefore swap \n\n";
    cout << "Vector 1 :: ";
    for (int ele : v1)
        cout << ele << "\t";
    cout << endl;

    cout << "Vector 2 :: ";
    for (int ele : v2)
        cout << ele << "\t";
    cout << endl;

    v1.swap(v2);

    cout << "\n\tAfter swap \n\n";
    cout << "Vector 1 :: ";
    for (int ele : v1)
        cout << ele << "\t";
    cout << endl;

    cout << "Vector 2 :: ";
    for (int ele : v2)
        cout << ele << "\t";
    cout << endl;

    return 0;
}

/*
TEST CASE

V :: 10  20  30  40  50  
-----------------------------------------

V :: 10  10  10  10  10

Inserting 5 at beginning
First element :: 5

Removing / erasing first element
First element :: 10

Emplacing at beginning
First element :: 5

Emplacing at the end
Last element :: 100

Vector size after clear() :: 0
-----------------------------------------

Swapping Vectors.

        Before swap

Vector 1 :: 10  20
Vector 2 :: 30  40

        After swap

Vector 1 :: 30  40
Vector 2 :: 10  20
*/
