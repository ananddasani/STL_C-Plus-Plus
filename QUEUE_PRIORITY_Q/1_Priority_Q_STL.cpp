/*
Priority queues are a type of container adapters, 
specifically designed such that the first element of the queue is the greatest of all elements in the queue 
and elements are in non increasing order (hence we can see that each element of the queue has a priority {fixed order}).


priority_queue :: value_type 
this is a builtin function in C++ STL which represents the type of object stored as an element in a priority_queue. 
It acts as a synonym for the template parameter. 

Syntax: 
priority_queue::value_type variable_name
*/

#include <iostream>
#include <queue>
using namespace std;

void showPQ(priority_queue<int> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << "  ";
        pq.pop();
    }
    cout << endl;
}

int main()
{
    //by default it will be max_heap
    priority_queue<int> pq;

    //insert element into the priority queue
    pq.push(5);
    pq.push(10);
    pq.push(15);
    pq.push(20);

    cout << "PQ == ";
    showPQ(pq);

    cout << "\nSize of PQ == " << pq.size() << endl;

    //swap

    priority_queue<int> pq2;

    for (int i = 9; i >= 6; i--)
        pq2.push(i * 10);

    cout << "\n--------------------------" << endl;
    cout << "PQ == ";
    showPQ(pq);
    cout << "PQ2 == ";
    showPQ(pq2);

    cout << "\nSwapping..." << endl;
    pq.swap(pq2);

    cout << "\nPQ == ";
    showPQ(pq);
    cout << "PQ2 == ";
    showPQ(pq2);

    //----------------------------------- value_type variable name -------------------------------

    priority_queue<int>::value_type myInt;

    //now here myInt act as a variable of int data type
    myInt = 100;
    cout << "\n---------------------------------" << endl;
    cout << "myInt = " << myInt << endl;

    cout << "PQ2 == ";
    showPQ(pq2);

    //insert into the queue
    cout << "Inserting element using myInt..." << endl;
    pq2.emplace(myInt);
    myInt = 200;
    pq2.emplace(myInt);

    cout << "PQ2 == ";
    showPQ(pq2);

    return 0;
}

/*
TEST CASE

PQ == 20  15  10  5  

Size of PQ == 4

--------------------------       
PQ == 20  15  10  5  
PQ2 == 90  80  70  60  

Swapping...

PQ == 90  80  70  60  
PQ2 == 20  15  10  5  

---------------------------------
myInt = 100
PQ2 == 20  15  10  5  
Inserting element using myInt... 
PQ2 == 200  100  20  15  10  5
*/
