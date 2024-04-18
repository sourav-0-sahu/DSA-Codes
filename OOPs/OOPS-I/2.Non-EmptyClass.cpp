#include<iostream>
using namespace std;

class Student {
    double a; 
    double b;
    char c;

    void study() {
        cout << "Studying" << endl;
    }
};


int main() {

    cout << sizeof(Student) << endl; //OUTPUT : 24 bytes

    /*
        sizeof double a = 8 bytes
        size of double b = 8bytes
        size of char c = 1byte
        Total = 8+8+1 =17 bytes
        Nearest Multiple of 8 which is >= 17  is 24
        That is why the size of class is 24 bytes
        Extra 7 bytes that were added is known as padding
        and padding is done by default by the compiler for quick accessing
    */
    return 0;
}