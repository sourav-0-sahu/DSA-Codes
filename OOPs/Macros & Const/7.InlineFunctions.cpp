#include<iostream>
using namespace std;

#define MAXX(x,y) (x>y ? x : y)
//Maxx is a inline function which takes two parameters x and y and returns the largest of two

int main() {

    int a = 5;
    int b = 6;
    int largest = MAXX(a,b);

    cout << largest << endl;
    cout << MAXX('a','A') << endl;
    return 0;
}