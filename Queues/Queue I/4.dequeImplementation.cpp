#include<iostream>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int _size) {
        arr = new int[_size];
        this->size = _size;
        front = -1;
        rear = -1;
    }
    //Note : hum cirular nature nahi maintain kar rhe
  
    void pushFront(int val) {
        //overflow
        if(front == 0) {
            cout << "Overflow" << endl;
        }
        //empty
        else if(front == -1 && rear == -1) {
            front++;
            rear++;
            arr[front] = val;
        }
        //Normal Flow
        else {
            //step 1: front ku peeche lekar aao
            front--;
            //step 2: val dal do
            arr[front] = val;
        }
    }

    void pushRear(int val) {
        //overflow
        if(rear == size-1) {
            cout << "Overflow" << endl;
        }
        //empty
        else if(front == -1 && rear == -1) {
            front++;
            rear++;
            arr[rear] = val;
        }
        //Normal Flow
        else {
            rear++;
            arr[rear] = val;
        }
    }

    void popFront() {
        //underflow
        if(front == -1 && rear == -1) {
            cout << "underflow" << endl;
        }
        //single Element
        else if(front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        //Normal flow
        else {
            arr[front] = -1;
            front++;
        }
    }

    void popRear() {
        //underflow
        if(front == -1 && rear == -1) {
            cout << "underflow" << endl;
        }
        //Single Element
        else if(front == rear) {
            arr[rear] = -1;
            rear = -1;
            front = -1;
        }
        //Normal FLow
        else {
            arr[rear] = -1;
            rear--;
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
    
    Deque d(5);

    d.pushFront(10); //Note: since we are not maintaining circular nature ,we can push only once in the front
    d.print(); //10 0 0 0 0  Front: 0 Rear: 0

    d.pushRear(20);
    d.print(); //10 20 0 0 0  Front: 0 Rear: 1

    d.pushRear(30);
    d.print(); //10 20 30 0 0 Front: 0 Rear: 2

    d.pushRear(40);
    d.print(); //10 20 30 40 0 Front: 0 Rear: 3
    
    d.pushRear(50);
    d.print(); //10 20 30 40 50 Front: 0 Rear: 4

    //popping
    d.popFront();
    d.print(); //-1 20 30 40 50  Front: 1 Rear: 4

    d.popFront();
    d.print(); //-1 -1 30 40 5  Front: 2 Rear: 4

    d.popRear();
    d.print(); //-1 -1 30 40 -1 Front=2 Rear = 3

    d.popRear();
    d.print(); //-1 -1 30 -1 -1 Front = 2 Rear = 2

    d.popFront();
    d.print();  //-1 -1 -1 -1 -1 Front = -1 Rear = -1

    d.popFront(); //underflow

    d.popRear(); //Under flow
    
    return 0;
}