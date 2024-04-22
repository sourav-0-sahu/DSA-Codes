#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->next = NULL;
    }

    Node(int _data) {
        this->data = _data;
        this->next = NULL;
    }
};

int main() {
    //Creation of NODE
    Node a; //Static ALlocation of object

    Node *b = new Node(); //Dynamic allocation of object
    
    return 0;
}