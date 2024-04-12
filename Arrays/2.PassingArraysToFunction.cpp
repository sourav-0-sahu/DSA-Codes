#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    //Agar iss line tak agaye
    //iska matlab Element Doesnot Exist
    return false;
}

int main() {
    //Lets Do a Linear Search
    int arr[5]= {1,2,5,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 21;

    bool ans = linearSearch(arr,n,target);

    //This is the way most if statements will be written in future
    if(!ans) {
        //(!ans) ----> if the answer is not true
        //it implies Element Doesnot Exist
        cout << "Element DoesNot Exist" << endl;
    }
    else {
        cout << "Element Exist" << endl;
    }

    return 0;
}