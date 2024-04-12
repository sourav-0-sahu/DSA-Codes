//Switch case is an alternative to long if-elseIf statements
#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 2;

    int op;
    cout << "a : 10 & b:2" << endl; 
    cout << "1.Add" << endl << "2.Subtrace" << endl << "3.multiply"<< endl << "4.divide" << endl;
    cout << "operation : " ;
    cin >> op;

    int ans = 0;
    if(op == 1){
        ans = a+b;
    }
    else if(op == 2) {
        ans = a-b;
    }
    else if(op == 3) {
        ans = a*b;
    }
    else if(op == 4) {
        ans =  a/b;
    }
    else {
        cout << "Invalid Operation" << endl;
        return 0; 
    }


    cout << "The Answer is : " << ans << endl;
    return 0;
}