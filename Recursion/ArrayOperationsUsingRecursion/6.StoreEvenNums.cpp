//Store Even Numbers of an array into a vector using Recursion
#include<iostream>
#include<vector>
using namespace std;

void solve(int* arr,int size,int index,vector<int> &v) {
    //Base Case
    if(index >= size) return;

    if(arr[index]%2 == 0) {
        v.push_back(arr[index]);
    }
    
    //Recursive Call
    solve(arr,size,index+1,v);


}


int main() {
    
    int arr[] ={10,203,21,41,4,1,21,22,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    vector<int> v;
    solve(arr,size,index,v);


    //Printing the vector
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}