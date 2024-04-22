#include<iostream>
using namespace std;

class Queue {
    public:
    //Data members
    int *arr;
    int size;
    int front;
    int rear;

    //constructor
    Queue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    //Member functions

    //push
    void push(int val) {
        //check full
        if(rear == size -1) {
            cout << "Queue Overflow" << endl;
        }
        else  if(front == -1 && rear == -1){
            //if the queue is empty
            front++;
            rear++;
            arr[rear] = val;
        }
        else {
            //normal
            rear++;
            arr[rear] = val;
        }
    }

    //pop
    void pop() {
        if(front == -1 && rear == -1) {
            //Queue is empty
            //pop is not possible
            cout << "Queue underflow" << endl;
            return;
        }
        else if (front == rear) {
            //single Element wala case
            arr[rear] = -1; //Jab bhi kisi element ku hataunga tu -1 daal dunga
            front = -1;
            rear = -1;
        }
        else {
            //Normal case
            arr[front] = -1; //Note : delete "front" se hota hai
            front++;
        }
    }

    //check queue is empty or not
    bool isEmpty() {
        if(front == -1 && rear == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    //Size of the Queue
    int getSize() {
        return rear-front+1; //Review
    }

    //Get front
    int getFront() {
        if(front == -1) {
            cout << "The Queue is empty,front Element kahan se laun bhai" << endl;
            return -1;
        }
        else {
            return arr[front];
        }
    }

    //print the Queue to watch queue implementation
    void print() {
        cout << "Printing Queue : " << endl;
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main() {
    //creation
    Queue q(5);
    q.print(); //output : 0 0 0 0 0

    q.push(10);
    q.print(); //output : 10 0 0 0 0 

    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.print(); //output : 10 20 30 40 50

    cout << "size of queue " << q.getSize() << endl;

    q.pop();
    q.print(); //output: -1 20 30 40 50
    cout << "size of queue " << q.getSize() << endl;

    //check queue is empty or not
    cout << "Queue is empty or not : " << q.isEmpty() << endl; //output : 0 -> false

    q.push(100); //OUTPUt : queue overflow

    q.print(); //output : -1 20 30 40 50

    q.pop(); 
    q.print(); //output : -1 -1 30 40 50
    cout << q.getFront() << endl; //output : 30

    q.pop();
    q.pop();
    
    q.print(); //output : -1 -1 -1 -1 50
    cout << q.getFront() << endl; //output : 50

    q.pop();
    q.print(); //output : -1 -1 -1 -1 -1 , this implies the queue is empty

    q.pop(); //output: Queue Underflow because no element present in the queue

    return 0;
}