#include<iostream>
using namespace std;

int x = 2; //Global Variable

int main() {

    x = 59; //GLobal x

    int x = 885; //local to main() function
    cout << x << endl; //885

    //Accessing Global Variable Using double colon
    cout << ::x << endl; //59

    x = 40; //Modifying Local variable
    ::x = 9; //Modifying Gloabl Variable

    cout << x << endl; //40
    cout << ::x << endl; //9

    //SCOPING
    {
        int x = 221225;
        cout << x << endl; //221225
        cout << ::x << endl; //9
    }

    cout << x << endl; //40
    return 0;
}