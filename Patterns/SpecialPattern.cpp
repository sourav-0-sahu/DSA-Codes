/*
    for n = 4
    **** ****   =======================
    ***   ***      Upper Half
    **     **
    *       *   ======================
    *       *   =======================
    **     **       Lower Half
    ***   ***
    **** ****   =======================
*/


#include<iostream>
using namespace std;

void printPattern(int n) {
    //For Upper Half of the pattern
    for(int row = 0; row < n; row++) {
        //Leading stars
        for(int col = 0; col < n-row; col++) {
            cout << "*";
        }
        //Then Spaces
        for(int col=0; col < 2*row+1; col++) {
            cout << " ";
        }

        //Then Stars
        for(int col = 0; col < n-row; col++) {
            cout << "*";
        }

        cout << endl;
    }

    //For Lower Half of the Pattern
    for(int row = 0; row < n; row++) {
        //Leading Stars
        for(int col = 0; col < row +1; col++) {
            cout << "*";
        }

        //Then Spaces
        for(int col =0; col < 2*n-2*row-1; col++) {
            cout << " ";
        }

        //Then Stars
        for(int col = 0; col < row+1; col++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    printPattern(n);

    return 0;
}