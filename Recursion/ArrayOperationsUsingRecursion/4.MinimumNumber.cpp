#include<iostream>
#include<limits.h>
using namespace std;

/* 
GALAT CODE
============

int solve(int* arr,int size,int index,int min) {
    //Base Case
    if(index >= size) return min;

    if(arr[index] < min) {
        min = arr[index];
    }else{
        min = solve(arr,size,index+1,min);
    }

    return min;

}

*/

void solve(int* arr,int size,int index,int &minimumNumber) {
    //Base Case
    if(index >= size) return;

    minimumNumber = min(arr[index],minimumNumber);

    solve(arr,size,index+1,minimumNumber);
}

int main() {
    int arr[] ={10,203,30,100,3,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    int minimumNumber = INT_MAX;

    solve(arr,size,index,minimumNumber);
    cout << minimumNumber << endl;
    
    return 0;
}