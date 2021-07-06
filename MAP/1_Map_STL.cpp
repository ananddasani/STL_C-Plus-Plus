/*
Maps are associative containers that store elements in a mapped fashion. 
Each element has a key value and a mapped value. No two mapped values can have same key values.


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
   //------------------------------ INSERTION --------------------------------

   //empty map (container)
   map<int, int> m1; //way 1

   //insert elements
   m1.insert(pair<int, int>(1, 10));
   m1.insert(pair<int, int>(2, 20));
   m1.insert(pair<int, int>(3, 30));
   m1.insert(pair<int, int>(4, 40));
   m1.insert(pair<int, int>(5, 50));

   cout << "\n   MAP 1" << endl;
   showMap(m1);

   //assigning all element of map1 to map2
   map<int, int> m2(m1.begin(), m1.end()); //way 2

   cout << "\n   MAP 2" << endl;
   showMap(m2);

   //----------------------------------- ERASE -----------------------------------

   //remove all element upto key 3
   cout << "\n-------------------------------------" << endl;
   cout << "Removing all elements upto key 3 from Map 1..." << endl;
   m1.erase(m1.begin(), m1.find(3));

   cout << "\n   MAP 1" << endl;
   showMap(m1);

   //remove element with key 5
   cout << "\nRemoving elements with key 5 in Map 2..." << endl;
   m2.erase(5);

   cout << "\n   MAP 2" << endl;
   showMap(m2);

   //------------------------------------- LOWER BOUND AND UPPER BOUND ----------------

   //finding lower bound for key 4 in Map 1
   cout << "\n-------------------------------------" << endl;
   cout << "Finding Lower bound for key 4 in Map 1(4)... " << endl;
   cout << "Key == " << m1.lower_bound(4)->first << "\t Element == " << m1.lower_bound(4)->second << endl;

   //finding upper bound for key 4 in Map 1
   cout << "\nFinding upper bound for key 4 in Map 1(4)... " << endl;
   cout << "Key == " << m1.upper_bound(4)->first << "\t Element == " << m1.upper_bound(4)->second << endl;

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


-------------------------------------
Removing all elements upto key 3 from Map 1...

   MAP 1
Key   Element
 3      30
 4      40
 5      50


Removing elements with key 5 in Map 2...

   MAP 2
Key   Element
 1      10
 2      20
 3      30
 4      40


-------------------------------------
Finding Lower bound for key 4 in Map 1(4)...
Key == 4         Element == 40

Finding upper bound for key 4 in Map 1(4)...
Key == 5         Element == 50
*/
