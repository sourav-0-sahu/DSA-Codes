/* 
    for n = 5

        *
       * *
      * * *    
     * * * *
    * * * * *
*/

#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int row = 0; row < n; row++) {
        //This loop will print spaces
        for(int col = 0; col < n - row - 1; col++ ) {
            cout << " ";
        }

        //After priting leading spaces ,we have to print stars
        //This loop will print stars 
        for(int col = 0; col < row +1; col++) {
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