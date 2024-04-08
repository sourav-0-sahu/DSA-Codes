#include<iostream>
using namespace std;

int main() {
    int grade;
    cin >> grade;

    if(grade >= 90) {
        cout << "Grade A" << endl;
    }
    else if(grade >= 70) {
        cout << "Grade B" << endl;
    }
    else if(grade >= 50) {
        cout << "Grade C" << endl;
    }
    else {
        cout << "dont know" << endl;
    }
    return 0;
}