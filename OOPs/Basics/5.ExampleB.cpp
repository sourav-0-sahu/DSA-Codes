#include<iostream>
using namespace std;

int x = 2; //Global

int main() {

    x = 10; //Global Variable
    int x = 20; //local x
    {
        int x = 30;
        {
            int x = 40;
            cout << x << endl; //40
        }
        cout << x << endl; //30
    }
    cout << x << endl; //20

    cout << ::x << endl; //10
    return 0;
}