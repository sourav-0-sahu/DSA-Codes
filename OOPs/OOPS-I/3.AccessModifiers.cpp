#include<iostream>
using namespace std;

class Student{
    private:
    //Private Data Members
    string gfName;
    
    public:
    //Public Data Members
    int id;
    string name;
    int age;
    int noOfSubjects;

    //Public Member Functions
    void study() {
        cout << "Studying" << endl;
    }

    void bunk() {
        cout << "Roaming in the streets" << endl;
    }

    private:
    void chatting() {
        cout << "Chatting with Girl Friend" << endl;
    }


};


int main() {
    //Creating an instance of class i.e Object
    Student s1;
    //If the data members are public , we can directly Initialize them
    s1.name = "Sourav Sahu";
    s1.id = 15;
    s1.age = 25;
    s1.noOfSubjects = 6;

    //Accessing Data Members
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.id << endl;
    cout << s1.noOfSubjects << endl;

    //Note : we cannot directly access private data members of a class
    // s1.gfName = "Shruti" ; This will throw error because , gfName is a private data member
    //cout << s1.gfName << endl; //This will also throw error because we are trying to access private data member outside the class
    
    return 0;
}