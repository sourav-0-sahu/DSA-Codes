#include<iostream>
using namespace std;

int solve(int n) {
    //Base Cases
    if(n == 0) return 0;
    if(n == 1) return 1;

    int sum = solve(n-1) + solve(n-2);
    return sum;
}


int main() {
    
    int n = 7;
    cout << solve(n) << endl;
    
    return 0;
}