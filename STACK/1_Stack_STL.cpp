/*
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, 
where a new element is added at one end and (top) an element is removed from that end only.  

Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, 
providing a specific set of member functions to access its elements.


*/

#include <iostream>
#include <stack>
using namespace std;

void showStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << " " << st.top() << endl;
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;

    //insert elements using push function , pop for remove
    for (int i = 1; i < 10; i++)
        st.push(i * 10);

    cout << "\nSTACK" << endl;
    showStack(st);

    //check the top element
    cout << "Top element :: " << st.top() << endl;

    cout << "Size of stack :: " << st.size() << endl;

    return 0;
}

/*
TEST CASE

STACK
 90
 80
 70
 60
 50
 40
 30
 20
 10

Top element :: 90
Size of stack :: 9
*/
