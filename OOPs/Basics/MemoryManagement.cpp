#include<iostream>
using namespace std;

int x = 42; //Global Variable in the intialized data segment

int y; //Global Variable in the BSS segment(uninitialized Segmeent)

int main() {
    int a = 5; //local Variable in the stack

    int *b = new int(89); //Allocated memory in the heap

    delete b; //DeAllocation
    
    return 0;
}