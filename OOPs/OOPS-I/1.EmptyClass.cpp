#include<iostream>
using namespace std;

class Student{

};


int main() {

    cout << sizeof(Student) << endl; //OUTPUT : 1byte
    return 0;
}

/*
    Note: The size of empty class is 1 byte because 1 byte is the smallest addressable Memory.
    If you are thinking the size of Empty Class is zero BYte, No it is not.
*/