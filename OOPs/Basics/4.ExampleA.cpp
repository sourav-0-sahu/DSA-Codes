#include<iostream>
using namespace std;

int x = 2; //Global Variable

void fun() {
    int x = 60; //This variable is local to "fun" function only
    cout << x << endl; //60
    cout << ::x << endl; //2
}

int main() {

    x = 59; //Global x
    int x = 885; //local to main() 
    cout << x << endl; //885

    //Accessing Global Variable using double colon
    cout << ::x << endl; //59

    x = 4; //Modifies local x of main function
    cout << x << endl; //4 --> this is value of local variable (main function) x

    fun();
    return 0;
}