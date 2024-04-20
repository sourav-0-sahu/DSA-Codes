#include<iostream>
using namespace std;

//Macro
#define PI 3.14159469

float circleArea(float r) {
    return PI * r * r;
}

float circlePerimeter(float r) {
    return 2 * PI * r;
}

int main() {
    cout << circleArea(10) << endl; //314.159
    cout << circlePerimeter(10) << endl; //62.8319
    
    return 0;
}