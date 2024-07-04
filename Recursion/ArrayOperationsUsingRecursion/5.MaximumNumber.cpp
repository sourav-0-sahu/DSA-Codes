#include<iostream>
using namespace std;

void solve(int* arr,int size,int index,int &maxNumber) {
    if(index >= size) return;

    maxNumber = max(arr[index],maxNumber);

    solve(arr,size,index+1,maxNumber);
}


int main() {
    int arr[] ={10,203,30,100,3,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    int maxNumber = INT_MIN;

    solve(arr,size,index,maxNumber);
    cout << maxNumber << endl;
    
    return 0;
}