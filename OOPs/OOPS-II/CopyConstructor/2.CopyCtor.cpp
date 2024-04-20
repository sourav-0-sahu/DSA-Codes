#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    int iD;

    //Default ctor
    Student() { cout << "Default Copy ctor Called" << endl; }

    //Parameterized ctor
    Student(string _name,int _age,int _id) {
        cout << "Parameterized Constructor Called" << endl;
        this->name = _name;
        this->age = _age;
        this->iD = _id;
    }

    //Copy Constructor 
    Student(const Student &obj) {
        cout << "Copy Ctor Called" << endl;
        this->name = obj.name;
        this->age = obj.age;
        this->iD = obj.iD;
    }
};

int main() {
    Student s1("Sourav",25,3);
    Student s2 = s1;

    cout << s1.name << endl; //Sourav
    cout << s2.name << endl; //Sourav
    
    return 0;
}

/*
    BAD PRACTICE:
    -------------
    Student s1("Sourav",25,3);
    Student s2;
    s2 = s1; //Here copy constructor will not be invoked


    GOOD PRACTICE
    -------------
    Student s1("Sourav",25,3);
    Student s2 = s1;

    OR
    Student s2(s1);

*/