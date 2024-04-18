#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;

    //Default Constructor
    Student() {
        cout << "Default Constructor Called" << endl;
    }
    //Parameterized Constructor
    Student(string _name,int _age) {
        cout << "parameterized Constructor called" << endl;
        name = _name;
        age = _age;
    }
};

int main() {
    Student s1; //when you dont pass any argument while creating objects,it invokes default constructor of the class
    Student s2("Sourav",24); //when you pass parameters while creating objects ,it invokes parameterized constructor
    
    return 0;
}