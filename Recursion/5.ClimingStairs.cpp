//leetCode Question
#include<iostream>
using namespace std;

int solve(int n) {
    //Base Case
    if(n==0) return 1;
    if(n==1) return 1;

    int value = solve(n-1) + solve(n-2);
    return value;
}


int main() {
    
    int n = 4; // n represents number of stairs
    cout << solve(n) << endl;
    
    return 0;
}