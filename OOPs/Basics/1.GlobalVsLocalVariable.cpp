#include<iostream>
using namespace std;

int x = 2; //Global Variable

int main() {
    x=59; //Modifying the Global Variable
    cout << x << endl;
    int x = 885; //local variable x 
    cout << x << endl; //Output : 885
    return 0;
}