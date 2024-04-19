#include<iostream>
using namespace std;



int main() {

    const int x = 5;
    x= 6; //This will throw Error because a constant variable cannot be modified
    return 0;
}