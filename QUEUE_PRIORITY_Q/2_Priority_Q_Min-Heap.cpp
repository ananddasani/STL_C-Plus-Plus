/*
Syntax
priority_queue <int, vector<int>, greater<int>> g = gq;  
*/

#include <iostream>
#include <queue>
using namespace std;

void showPQ_Min(priority_queue<int, vector<int>, greater<int>> pq_min)
{
    while (!pq_min.empty())
    {
        cout << pq_min.top() << "  ";
        pq_min.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq_min;

    //insert element
    pq_min.push(20);
    pq_min.push(15);
    pq_min.push(10);
    pq_min.push(5);

    //all element will be in stored in increasing order (in this case of min heap)
    cout << "\nPQ (Min Heap) == ";
    showPQ_Min(pq_min);

    return 0;
}

/*
TEST CASE

PQ (Min Heap) == 5  10  15  20 
*/
