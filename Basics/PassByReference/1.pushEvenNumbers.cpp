#include<iostream>
#include<vector>
using namespace std;

//the vector v is a reference variable
void pushEvenNumbers(int* arr,int size,vector<int> &v) {
    for(int i=0; i<size; i++) {
        if(arr[i]%2 == 0) {
            v.push_back(arr[i]);
        }
    }
}


int main() {
    int arr[] = {10,3,14,1,41,21,22,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    pushEvenNumbers(arr,size,v);


    //Printing the vector
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}