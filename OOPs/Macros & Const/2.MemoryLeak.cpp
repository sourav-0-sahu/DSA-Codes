#include<iostream>
using namespace std;



int main() {

    int *a = new int(5);
    cout << *a << endl;

    //value 5 is stored in HEAP memory
    //since it is allocated in HEAP memory ,we have to deallocate it manually
    //if we do not deallocate, 5 stays there,even though the execution of our program is finished
    //This is an example of memory

    //Deallocating
    delete a;

    cout << *a << endl; //Now this will print a Random value 
    return 0;
}