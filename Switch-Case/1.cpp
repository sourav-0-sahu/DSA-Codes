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
    
    switch (op)
    {
    case 1:
        ans = a+b;
        break;
    case 2:
        ans = a-b;
        break;
    case 3:
        ans = a*b;
        break;
    case 4:
        ans = a/b;
        break;
    
    default:
        //This will be executed when the above case wont evaluates to true
        cout << "invalid Operation" << endl;
        return 0;
    }


    cout << "The Answer is : " << ans << endl;
    return 0;
}