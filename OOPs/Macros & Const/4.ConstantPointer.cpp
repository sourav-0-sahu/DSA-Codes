#include<iostream>
using namespace std;



int main() {

    int *const a = new int(2);
    //Pointer a will only point to the address in the memory where '2' is stored
    //The pointer is constant but not the value that is stored at that address
    cout << *a << endl;

    int b  =23;
    // a = &b; //This will Throw Error

    *a  = 75; //This will not throw error
    cout << *a << endl;


    return 0;
}
/*
    Summary
    -------
    int const *a = new int(5); Value cannot be modified but the pointer can be used to point any other integer address

    int *const a = new int(5); The pointer cannot be used to point any other integer address but the value stored at it can be modified
*/