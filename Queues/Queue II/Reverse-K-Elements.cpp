/*
i/p - 10 20 30 40 50 , k = 3 (this means reverse first 3 elements of queue)
o/p - 30 20 10 40 50
*/

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseKelements(queue<int> &q,int k) {
    int n = q.size();
    //step 1: push k elements from the queue to the stack
    stack<int> st;
    for(int i=0; i<k; i++) {
        int temp = q.front();
        q.pop();
        st.push(temp);
    }

    //step 2: push those k elements from the stack to the queue
    while(!st.empty()) {
        int topElement = st.top();
        st.pop();
        q.push(topElement);
    }

    //step 3: delete (n-k) elements from the front of the queue,and push at rear
   for(int i=0; i< n-k; i++) {
    int temp = q.front();
    q.pop();
    q.push(temp);
   }

}




int main() {
    queue<int> q;
    q.push(10);    
    q.push(20);    
    q.push(30);    
    q.push(40);    
    q.push(50);    

    reverseKelements(q,3);
    
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    //OUTPUT : 30 20 10 40 50
    return 0;
}