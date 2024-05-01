#include<iostream>
#include<queue>
using namespace std;

void interLeaveQueue(queue<int> &first) {
    //create a second queue
    queue<int> second;

    //push first half of the queue in second queue
    int size = first.size();
    for(int i=0; i<size/2; i++) {
        int temp = first.front();
        first.pop();
        second.push(temp);
    }

    //Merge both the halves into the original queue
    for(int i=0; i<size/2; i++) {
        int temp = second.front();
        second.pop();
        first.push(temp);


        temp = first.front();
        first.pop();
        first.push(temp);
    }

}
void interLeaveQueueODD(queue<int> &first) {
    //create a second queue
    queue<int> second;

    //push first half i.e size /2 +1 elements to the second queue
    int size = first.size();
    for(int i=0; i< (size/2)+1; i++) {
        int temp = first.front();
        first.pop();
        second.push(temp);
    }

    //Merge both the halves into the original one
    for(int i=0; i<size/2; i++) {
        int temp = second.front();
        second.pop();
        first.push(temp);

        temp = first.front();
        first.pop();
        first.push(temp);
    }

    //Since the second contains one left out element
    first.push(second.front());
    second.pop();
}
void printQueue(queue<int> &q) {
    //base case
    if(q.empty()) {
        return;
    }

    int temp = q.front();
    cout << temp << " ";
    q.pop();

    //Recursive call
    printQueue(q);

    //Recursive call se wapas karte hue
    q.push(temp);
}

int main() {
    
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    //q.push(80);

    //Even wali case
    // interLeaveQueue(q);

    //odd wali case
    interLeaveQueueODD(q);


    printQueue(q);
    
    return 0;
}