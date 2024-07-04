#include<iostream>
using namespace std;

bool solve(int* arr,int size,int index,int target) {
    //Base Case
    if(index >= size) {
        return false;
    }

    if(arr[index] == target) {
        return true;
    }

    bool ans = solve(arr,size,index+1,target);

    return ans;
}


int main() {
    
    int arr[] ={10,203,30,100,3,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    int target = 2;
    
    bool result = solve(arr,size,index,target);
    cout << result << endl;
    
    return 0;
}