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
        cout << "Printing Queue : " << endl;
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main() {
    
    CircularQueue Cq(5);
    Cq.print(); //OUTPUT : 0 0 0 0 0

    return 0;
}
