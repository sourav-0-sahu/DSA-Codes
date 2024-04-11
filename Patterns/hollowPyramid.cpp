/*
 n = 5
    *
   * *
  *   *
 *     *
*       * 
*/

#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int row = 0; row < n; row++) {
        //for leading space
        for(int col =0; col < n-1-row; col++) {
            cout << " ";
        }


        //For spaces
        for(int col = 0; col < row+1; col++) {
         
            if(col == 0 || col == (row+1)-1)
            {
                //for the first column and last column
                //print stars
                cout << "* ";  //added space here
            }
            else {
                cout << "  "; //added double space here
            }
        }

        cout << endl;
    }
}

int main() {
    int n = 7;
    printPattern(n);
    return 0;
}