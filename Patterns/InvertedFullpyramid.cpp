/*
    for n =5
     * * * * *
      * * * *
       * * *
        * *
         *
*/

#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int row = 0; row < n; row++) {

        //for Leading Spaces
        for(int col = 0; col < row; col++) {
            cout << " ";
        }
        //For Stars
        for(int col = 0; col < n-row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printPattern(n);
    return 0;
}