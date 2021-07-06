/*
Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement. 

Elements are inserted at the back (end) and are deleted from the front.
Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, 
    providing a specific set of member functions to access its elements.

*/

#include <iostream>
#include <queue>
using namespace std;

void showQ(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << "  ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;

    //--------------------------- PUSH ELEMENT -----------------------------------

    for (int i = 1; i <= 5; i++)
        q.push(i * 10);

    cout << "\nQ == ";
    showQ(q);

    //--------------------------- POP ELEMENT -----------------------------------

    cout << "\nQ.pop() == ";
    q.pop();
    showQ(q);

    //----------------------------- SIZE -------------------------------------
    cout << "\nQ.size() == " << q.size() << endl;

    //----------------------- FRONT AND BACK -----------------------------------

    cout << "\nFront element == " << q.front() << endl;
    cout << "Last element == " << q.back() << endl;

    //------------------------ SWAP --------------------------------------------

    queue<int> q2;

    for (int i = 9; i > 5; i--)
        q2.push(i * 10);

    cout << "\n---------------------------------" << endl;
    cout << "Q1 == ";
    showQ(q);
    cout << "Q2 == ";
    showQ(q2);

    cout << "\nswap(Q1 , Q2)..." << endl;
    swap(q, q2);
    // OR
    // q.swap(q2);

    cout << "\nQ1 == ";
    showQ(q);

    cout << "Q2 == ";
    showQ(q2);

    return 0;
}

/*
TEST CASE

Q == 10  20  30  40  50  

Q.pop() == 20  30  40  50

Q.size() == 4

Front element == 20
Last element == 50

---------------------------------
Q1 == 20  30  40  50
Q2 == 90  80  70  60

swap(Q1 , Q2)...

Q1 == 90  80  70  60
Q2 == 20  30  40  50
*/
