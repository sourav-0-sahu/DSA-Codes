#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    bool present;

    private:
    Student() {
        //The Default Constructor is made private
    }
};

int main() {

    Student s1; //This will throw Error because the constructor is private ,how can you invoke the construtor outside the class, this is not possible , Hence CONSTRUCTORS SHOULD NOT BE MADE PRIAVTE , ALWAYS PUBLIC
    return 0;
}