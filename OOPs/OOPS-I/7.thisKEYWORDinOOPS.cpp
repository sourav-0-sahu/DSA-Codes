#include<iostream>
using namespace std;

class Student {
    public:
    //Data Members
    int age;
    string name;

    //Ctors
    Student(string _name,int _age) {
        this->name = _name;
        this->age = _age;
    }

    //Member FUnctions
    void study() {
        cout << "Studying" << endl;
    }
};

int main() {

    Student s1("Sourav",25);

    cout << s1.name << endl; //Sourav
    cout << s1.age <<endl; //25
    return 0;
}