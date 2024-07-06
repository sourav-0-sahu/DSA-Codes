#include<iostream>
using namespace std;

bool checkSorted(int* arr,int size,int index){
    //Base Case
    if(index >= size) return true;

    if(arr[index] > arr[index-1]) {
        bool ans = checkSorted(arr,size,index+1);
        return ans;
    }
    return false;

}



int main() {
    
    int arr[] = {10,20,30,40,50};
    int index = 1; //Important
    int size = 5;
    bool res = checkSorted(arr,size,index);
    cout << res << endl;
    
    return 0;
}