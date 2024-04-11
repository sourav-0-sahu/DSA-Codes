/*
    for n = 5
    *_______*
     *_____*
      *___*
       *_*
        *

*/

#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int row = 0; row < n; row++) {

        //Leading spaces
        for(int col = 0; col < row; col++) {
            cout << " ";
        }

        //For stars and spaces
        for(int col =0; col < 2*n -2*row-1; col++) {
            //for first column and last column print stars
            if(col == 0 || col == (2*n -2*row-1)-1 ) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }
}

int main() {
    int n = 5;
    printPattern(n);

    return 0;
}