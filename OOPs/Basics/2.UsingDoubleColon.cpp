//Using double colon to acces global variables
#include<iostream>
using namespace std;

int x = 2; //Global Variable

int main() {
    x=59; //This will modify the global variable x

    int x = 889; //Local Variable
    cout << "Local Variable x : " << x << endl;

    //Accessing Global variable using double colon(::)
    cout << "Global Variable x : " << ::x << endl;

    //You can also modify global variable using double colon
    ::x = 9100;
    cout << "Global Variable x : " << ::x << endl;
    return 0;
}