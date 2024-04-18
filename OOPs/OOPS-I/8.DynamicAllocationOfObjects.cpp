#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;

    Student(string _name,int _age) {
        this->name = _name;
        this->age = _age;
    }

    void study () {
        cout << "Studying" << endl;
    }
};

int main() {

    //This Object will get Allocated on the STACK
    Student s1("Sourav",25);

    //This Object will get allocated on the HEAP
    Student *s2 = new Student("Henry",21);

    cout << s1.name << " " << s1.age << endl; //Sourav 25

    //Using arrow Operator to access dynamically allocated Objects (Mostly Used)
    cout << s2->name << " " << s2->age << endl; //Henry 21

    //Another way of accessing Dynamically allocated Objects
    cout << (*s2).name << " " << (*s2).age << endl; //Henry 21
    return 0;
}