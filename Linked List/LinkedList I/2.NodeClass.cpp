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
        cout << "Paramterized Ctor" << endl;
        this->data = _data;
        this->next = NULL;
    }
};

void printLL(Node* head) {
    //ORIGINAL HEAD POINTER KU CHHED NA NAHI
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " --> ";
        temp = temp->next;

    }
    
}

int main() {
   Node* first = new Node(10);
   Node* second = new Node(20);
   Node* third = new Node(30);
   Node* fourth = new Node(40);
   Node* fifth = new Node(50);
   Node* sixth = new Node(60);

   //Lets connect the nodes
   first->next = second;
   second->next = third;
   third->next = fourth;
   fourth->next = fifth;
   fifth->next = sixth;

   //Now we have successfully created a linked List

   //lets create head
   Node* head = first; //head is a pointer of Node type which points to first Box of the linked list

   //Print Linked List
   printLL(head);
    
    return 0;
}