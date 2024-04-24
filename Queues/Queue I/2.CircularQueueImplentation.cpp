#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    //Constructor
    CircularQueue(int _size) {
        arr = new int[_size];
        this->size = _size;
        front = -1;
        rear = -1;
    }

    //Push
    void push(int val) {
        //Overflow
        if(front == 0 && rear == size-1) {
            cout << "OverFlow" << endl;
        }
        //Empty Case 
        else if(front == -1 && rear == -1) {
            front++,rear++;
            arr[rear] = val;
        }
        //Circular Nature
        else if(rear == size-1 && front != 0) {
            rear = 0;
            arr[rear] = val;
        }
        else {
            //Normal flow
            rear++;
            arr[rear] = val;
        }
    }

    //pop
    void pop() {
        //UnderFlow
        if(front == -1 and rear == -1) {
            cout << "UnderFlow" << endl;
        }
        //Single Element
        else if(front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        //Circular Nature
        else if(front == size-1) {
            arr[front] = -1;
            front = 0;
        }
        else {
            //Normal Flow
            arr[front] = -1;
            front++;
        }
    }

    //Print
    void print() {
        cout << "Printing Queue : ";
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Front: " << front << " Rear: " << rear << endl;
    }
};


int main() {
    
    CircularQueue Cq(5);
    Cq.print(); //OUTPUT : 0 0 0 0 0 , Front = -1,Rear = -1

    Cq.push(10);
    Cq.print(); //OUTPUT: 10 0 0 0 0, Front = 0, Rear = 0

    Cq.push(20);
    Cq.print(); //OUTPUT: 10 20 0 0 0 , Front = 0, Rear = 1

    Cq.push(30);
    Cq.print(); //OUTPUT: 10 20 30 0 0 , Front = 0, Rear = 2

    Cq.push(40);
    Cq.print();//OUTPUT: 10 20 30 40 0, Front = 0, Rear=3

    Cq.push(50);
    Cq.print();//OUTPUT: 10 20 30 40 50, Front = 0, Rear = 4

    Cq.push(60); //OUTPUT: Queue Overflow

    //Popping Elements
    Cq.pop();
    Cq.print(); //OUTPUT: -1 20 30 40 50  Front: 1 Rear: 4

    Cq.pop();
    Cq.print();//OUTPUT: -1 -1 30 40 50   Front: 2 Rear: 4

    Cq.pop();
    Cq.print();//OUTPUT: -1 -1 -1 40 50   Front: 3 Rear: 4

    //Circular Push
    Cq.push(100);
    Cq.print(); //OUTPUT: 100 -1 -1 40 50   Front: 3 Rear: 0

    Cq.push(110);
    Cq.print(); //OUTPUT: 100 110 -1 40 50    Front: 3 Rear: 1

    Cq.push(120);
    Cq.print(); //OUTPUT: 100 110 120 40 50   Front: 3 Rear: 2

    // As you can see the queue is full  100 110 120 40 50
    //So any further push must result in overflow
    Cq.push(130);
    Cq.print(); //OUTPUT: 100 110 120 '130' 50 , Front:3 Rear:3
    //it replaced the Element 40 into 130, which should Not be



    return 0;
}
