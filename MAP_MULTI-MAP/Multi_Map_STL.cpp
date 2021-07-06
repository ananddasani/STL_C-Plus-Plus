/*
Multimap is similar to map with an addition that multiple elements can have same keys. 
Also, it is NOT required that the key value and mapped value pair has to be unique in this case. 
One important thing to note about multimap is that multimap keeps all the keys in sorted order always. 
These properties of multimap makes it very much useful in competitive programming.
*/

#include <iostream>
#include <map>
using namespace std;

void showMap(multimap<int, int> mm)
{
    //set the iterator
    multimap<int, int>::iterator it;

    cout << "Key   Element" << endl;
    for (it = mm.begin(); it != mm.end(); it++)
        cout << " " << it->first << "\t" << it->second << endl;
    cout << endl;
}

int main()
{
    multimap<int, int> mm1;

    //insert elements
    for (int i = 1; i <= 5; i++)
        mm1.insert(pair<int, int>(i, i * 10));

    //inserting duplicate key value (NO ERROR)
    mm1.insert(pair<int, int>(5, 50));

    cout << "\n Multi_MAP 1" << endl;
    showMap(mm1);

    //else all the mehtod will be identical for map and multi map
    // keep coding !!
    // :)

    return 0;
}

/*
TEST CASE

 Multi_MAP 1
Key   Element
 1      10
 2      20
 3      30
 4      40
 5      50
 5      50
*/
