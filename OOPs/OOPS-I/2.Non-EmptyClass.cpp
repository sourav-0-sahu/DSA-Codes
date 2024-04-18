#include<iostream>
using namespace std;

class Student {
    int id;
    int age;
    int markOfMathematics;

    void study() {
        cout << "Studying" << endl;
    }
};


int main() {

    cout << sizeof(Student) << endl; //OUTPUT : 12 bytes
    return 0;
}