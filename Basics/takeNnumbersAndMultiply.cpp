#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int product  = 1; //Yahan par galti karoge
    while(n--) {
        int x;
        cin >> x;
        product = product * x;
    }
    cout << product << endl;
    return 0;
}