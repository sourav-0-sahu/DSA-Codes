#include<iostream>
using namespace std;

void solve(int n) {
    //Base Case
    if(n == 0) return;

    solve(n-1);

    cout << n << endl;
}


int main() {
    
    int n = 6;
    solve(n);
    
    return 0;
}