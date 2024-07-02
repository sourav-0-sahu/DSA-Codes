#include<iostream>
using namespace std;

void reversePrinting(int* arr,int size,int index) {
    //Base Case
    if(index == size) return;
    reversePrinting(arr,size,index+1);

    cout << arr[index] << endl;

}


int main() {
    int arr[] = {10,20,30,40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    reversePrinting(arr,size,index);
    
    return 0;
}