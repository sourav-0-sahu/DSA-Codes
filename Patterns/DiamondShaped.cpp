/*
    for n = 7
        *
       * *
      * * *    
     * * * *
      * * * 
       * *
        *  
*/

#include<iostream>
using namespace std;

void printPattern(int n) {
    //Pyramid

    int pyramidRows = (n/2) + 1;
    for(int row = 0; row < pyramidRows; row++) {
        //This loop will print leading spaces
        for(int col =0; col < pyramidRows - row -1; col++) {
            cout << " ";
        }

        for(int col =0; col < row+1; col++) {
            cout << "* ";
        }
        cout << endl;
    }


    //INVERTED Pyramid
    int invertedPyramidRows = n/2;
    for(int row =0; row < invertedPyramidRows; row++) {
        //For leading spaces
        for(int col = 0; col < row +1; col++) {
            cout << " ";
        }
        //For stars
        for(int col = 0; col < invertedPyramidRows - row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n = 7;
    printPattern(n);

    return 0;
}