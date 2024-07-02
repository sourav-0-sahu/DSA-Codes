#include<iostream>
using namespace std;

void solve(int n) {
    //Base Case
    if(n == 0) return;

    //Processing
    cout << n << endl;

    //Recursive Call
    solve(n-1);
}

int main() {
    int n = 5;
    solve(n);
    return 0;
}