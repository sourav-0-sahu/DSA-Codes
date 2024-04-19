#include<iostream>
using namespace std;



int main() {

    const int *a = new int(5);
    //Note : The value cannot be modified which is stored in the memory
    //But the pointer is not constant that means the pointer can point to any other Integer address

    cout << *a << endl; //5

    int b= 23;
    a = &b;

    cout << *a << endl; //23

    //We have not freed the memory allocated in heap ,hence this is also an example of memory Leak
    return 0;
}