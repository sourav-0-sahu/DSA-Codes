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
        for(int col =0; col < n -1-row; col++) {
            cout << :" "
        }
    }
}

int main() {
    int n = 5;
    printPattern(n);
    return 0;
}