#include<iostream>
using namespace std;

void printArr(int* arr,int size,int index) {
    //Base Case
    if(index == size) return;

    //Processing
    cout << arr[index] << endl;

    //Recursive Call
    printArr(arr,size,++index); //here if u do index++ ,the recursion will be infinite
}


int main() {
    
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    printArr(arr,size,index);
    
    return 0;
}