#include<iostream>
using namespace std;

int solve(int n) {
    if( n == 0) return 1;

    int value = solve(n-1);

    return 2 * value;
}


int main() {
    
    int n = 5;
    cout << solve(n) << endl;
    
    return 0;
}