#include<iostream>
#include<queue>
using namespace std;

void reverse(queue<int> &q) {
    //Base case
    if(q.empty()) {
        return;
    }

    //Agar base case nahi hit hua
    int element = q.front();
    q.pop();
    reverse(q);
    q.push(element);
}

void printQueue(queue<int> q) {
    //Base case
    if(q.empty()) {
        return;
    }

    //Agar base case nahi hit hoya
    cout << q.front() << " ";
    q.pop();
    printQueue(q);
}
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverse(q);
    
    printQueue(q);
    return 0;
}