#include<iostream>
using namespace std;
//Note: the string is passed by value ,though it gives desired output but it takes a lot of space
void printPermutation(string str,int index) {
    //Base case
    if(index >= str.length()) {
        cout << str << " ";
        return;
    }

    for(int j=index; j<str.length(); j++) {
        swap(str[index],str[j]);

        printPermutation(str,index+1);
    }
}


int main() {
    
    string str = "abc";
    int index = 0;
    printPermutation(str,index);
    
    return 0;
}

//OUTPUT : abc acb bac bca cab cba 