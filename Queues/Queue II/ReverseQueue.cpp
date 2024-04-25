#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q) {
    stack<int> s;

    //one by one element lo and stack me dalo
    while(!q.empty()) {
        //jab tak mera q empty nahi hai
        int frontElement = q.front();
        q.pop();

        s.push(frontElement);
    }

    //one by one element stack se lo and queue mein push karo
    while(!s.empty()) {
        //jab tak stack empty nahi hai
        int topElement = s.top();
        
        //queue mein push karo
        q.push(topElement);

        //stack mein top element ku pop kardo
        s.pop();

    }
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    
    reverseQueue(q);

    cout << "printing Queue" << endl;

    while(!q.empty()) {
        int element = q.front();
        cout << element << " ";
        q.pop();
    }
    return 0;
}