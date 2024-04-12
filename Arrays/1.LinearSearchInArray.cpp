#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {2,3,5,6,9};

    int target = 5;

    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            cout << "Element Present" << endl;
            return 0;
        }
    }

    //Agar Saara element traverse karliya and Element Present nahi print hua
    //tu main function exit nahi karega loop ke andar
    //that implies Element not present 
    cout << "Element Not Present" << endl;
    return 0;
}