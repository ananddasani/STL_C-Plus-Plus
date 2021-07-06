/*
map::count() 
it is a built-in function in C++ STL which returns 1 if the element with key K is present in the map container. It returns 0 if the element with key K is not present in the container.

Syntax:
map_name.count(key k)

map::operator[]
This operator is used to reference the element present at position given inside the operator. 
It is similar to the at() function, the only difference is that the at() function throws an out-of-range exception 
when the position is not in the bounds of the size of map, while this operator causes undefined behaviour.

Syntax :
mapname[key]
*/

#include <iostream>
#include <map>
using namespace std;

void showMap(map<int, int> m)
{
    cout << "Key   Element" << endl;
    for (auto it = m.begin(); it != m.end(); it++)
        cout << " " << it->first << "\t" << it->second << endl;
    cout << endl;
}

int main()
{
    //---------------------------- INSERTION WAYS -------------------------------
    map<int, int> m1;
    for (int i = 1; i <= 5; i++) //way 1
        m1.insert(pair<int, int>(i, i * 10));

    map<int, int> m2(m1.begin(), m1.end()); //way 2

    //operator =
    map<int, int> m3 = m2; // way 3

    //inserting pair
    map<int, int> m4; // way 4
    m4.insert({9, 90});
    m4.insert({8, 70});
    m4.insert({7, 70});

    cout << "\n   MAP 1" << endl;
    showMap(m1);

    cout << "\n   MAP 2" << endl;
    showMap(m2);

    cout << "\n   MAP 3" << endl;
    showMap(m3);

    cout << "\n   MAP 4" << endl;
    showMap(m4);

    //------------------------ COUNT -------------------------------

    cout << "\n------------------ count() --------------------";
    if (m1.count(9))
        cout << "\nKey 9 is present in Map 1 :)" << endl;
    else
        cout << "\nKey 9 is not present in Map 1 :(" << endl;

    if (m4.count(9))
        cout << "Key 9 is present in Map 4 :)" << endl;
    else
        cout << "Key 9 is not present in Map 4 :(" << endl;

    //--------------------- Operator [] ----------------------------

    cout << "\n--------------- [] -------------------" << endl;
    cout << "Map1[1] == " << m1[1] << endl;
    cout << "Map2[2] == " << m2[2] << endl;
    cout << "Map3[3] == " << m3[3] << endl;
    cout << "Map4[4] == " << m4[4] << " //undefined behaviour " << endl;

    //--------------------- Operator () -------------------------------

    cout << "\n--------------- () -------------------" << endl;
    cout << "Map1.at(1) == " << m1.at(1) << endl;
    cout << "Map2.at(2) == " << m2.at(2) << endl;
    cout << "Map3.at(3) == " << m3.at(3) << endl;
    cout << "Map4.at(4) == " << m4.at(4) << " //error " << endl;

    //-------------------- SIZE AND CLEAR AND EMPTY -----------------------------

    cout << "\n------------------------------------------" << endl;
    cout << "Size of Map1 == " << m1.size() << endl;
    cout << "Map1 empty or not ? " << m1.empty() << endl;

    cout << "\nclearing Map1..." << endl;
    m1.clear();
    cout << "\nSize of Map1 == " << m1.size() << endl;
    cout << "Map1 empty or not ? " << m1.empty() << endl;

    //--------------------------- SWAP ---------------------------------------------

    cout << "\n-------------------- swap() -----------------------" << endl;

    cout << "Swap(Map2 , Map4)..." << endl;
    swap(m2, m4);

    cout << "\n   MAP 2" << endl;
    showMap(m2);

    cout << "\n   MAP 4" << endl;
    showMap(m4);

    return 0;
}

/*
TEST CASE

   MAP 1
Key   Element
 1      10
 2      20
 3      30
 4      40
 5      50


   MAP 2
Key   Element
 1      10
 2      20
 3      30
 4      40
 5      50


   MAP 3
Key   Element
 1      10
 2      20
 3      30
 4      40
 5      50


   MAP 4
Key   Element
 7      70
 8      70
 9      90


------------------ count() --------------------
Key 9 is not present in Map 1 :(
Key 9 is present in Map 4 :)

--------------- [] -------------------
Map1[1] == 10
Map2[2] == 20
Map3[3] == 30
Map4[4] == 0 //undefined behaviour

--------------- () -------------------
Map1.at(1) == 10
Map2.at(2) == 20
Map3.at(3) == 30
Map4.at(4) == 0 //error

------------------------------------------
Size of Map1 == 5
Map1 empty or not ? 0

clearing Map1...

Size of Map1 == 0
Map1 empty or not ? 1

-------------------- swap() -----------------------
Swap(Map2 , Map4)...

   MAP 2
Key   Element
 4      0
 7      70
 8      70
 9      90


   MAP 4
Key   Element
 1      10
 2      20
 3      30
 4      40
 5      50

*/
