#include<iostream>
using namespace std;

class Student {
    private:
    string gf;

    public:
    string name;
    int id;
    int age;
    int no_of_subjects;

    //Default Ctor
    Student() {
        
    }

    //parameterized Ctor for students without GF
    Student(string _name,int _id, int _age,int _no_of_subjects) {
        cout << "Parameterized ctor without GfName called" << endl;
        name = _name;
        id = _id;
        age = _age;
        no_of_subjects = _no_of_subjects;
        gf = "Not Available";
    }

    //Parameterized Ctor for Students with Gf
    Student(string _name,int _id,int _age, int _no_of_subjects,string _gfName) {
        cout << "parameterized Ctor with gfName Called" << endl;
        name = _name;
        id = _id;
        age = _age;
        no_of_subjects = _no_of_subjects;
        gf = _gfName;
    }
};

int main() {
    //Student 1 with Girl Friend
    Student s1("Sourav",15,25,5,"Sindi");

    //Student 2 without Gf
    Student s2("Henry",2,21,5);
    
    return 0;
}