#include<iostream>
#include<deque>
using namespace std;

int main() {
    //Deque creation
    deque<int> dq;

    //Pushing element
    dq.push_back(10);
    //Pushing element to the front 
    dq.push_front(20);

    //poppping element from rear
    // dq.pop_back();
    //popping element from front
    dq.pop_front();

    //prints the front element
    cout << dq.front() << endl;
    //prints the back element
    cout << dq.back() << endl;

    //size of the queue
    cout << dq.size() << endl;

    return 0;
}