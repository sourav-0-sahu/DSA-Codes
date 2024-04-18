#include<iostream>
using namespace std;

class Student {
    int id;

    void study() {
        cout << "Studying" << endl;
    }
};


int main() {

    cout << sizeof(Student) << endl; //OUTPUT : 4 bytes
    return 0;
}