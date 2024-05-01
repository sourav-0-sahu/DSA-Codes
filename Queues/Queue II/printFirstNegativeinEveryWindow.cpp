#include<iostream>
#include<deque>
using namespace std;

void printFirstNegative(int* arr,int n, int k) {
    //create  a deque which will store index of the negative elements only
    deque<int> dq;

    //process the first window (k- elements)
    for(int index = 0; index < k; index++) {
        if(arr[index] < 0) {
            //agar negative element hai
            //tu deque mein store karo uska index
            dq.push_front(index);
        }
    }

    //Remaining windows ku process karo
    for(int index=k; index<n; index++) {
        if(dq.empty()) {
            cout << "0"  << " ";
        }
        else {
            cout << arr[dq.front()] << " ";
        }
        
        //Removal - Jo bhi index out of range hai , usko deque se remove kardo
        if(index - dq.front() >=k) {
            dq.pop_front();
        }

        //Addition
        if(arr[index] < 0) {
            dq.push_back(index);
        }
    }

    //last window ka answer print kardo
    if(dq.empty()) {
        cout << "0" << " ";
    }
    else {
        cout << arr[dq.front()] << " ";
    }
}


int main() {
    
    int arr[] = {2,-5,4,-1,-2,0,5};
    int size = 7;
    int windowSize = 3;

    printFirstNegative(arr,size,windowSize);
    
    return 0;
}