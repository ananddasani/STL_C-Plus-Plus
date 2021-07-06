/*
Capicity 

size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.
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
        cout << e << "\t";
    cout << endl;

    //Checking vector capacity by different ways
    cout << "\n-----------------------------------------" << endl;
    cout << "Size == " << v.size() << endl;
    cout << "Capacity == " << v.capacity() << endl;
    cout << "Max_Size == " << v.max_size() << endl;

    //resize the container to 4 from 5
    v.resize(4);
    cout << "\nAfter resizing size == " << v.size() << endl;
    cout << endl;

    //shrink the vector
    v.shrink_to_fit();
    for (auto ptr = v.begin(); ptr != v.end(); ptr++)
        cout << *ptr << "\t";
    cout << endl;

    return 0;
}

/*
TEST CASE

V :: 10 20      30      40      50

-----------------------------------------
Size == 5
Capacity == 8
Max_Size == 536870911

After resizing size == 4

10      20      30      40
*/
