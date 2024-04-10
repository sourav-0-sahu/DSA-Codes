/*
    row = 3, col = 5
    * * * * *
    * * * * *
    * * * * *
*/
#include<iostream>
using namespace std;

void printPattern(int row,int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
 


int main() {
    int row,col;
    cin >> row >> col;

    printPattern(row,col);
    return 0;
}