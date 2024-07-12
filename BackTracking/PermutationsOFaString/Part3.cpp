//so what is the solution if we want to pass the string by refrence 
//Ans - backtracking
#include<iostream>
using namespace std;

void printPermutation(string& str,int index) {
    //Base case
    if(index >= str.length()) {
        cout << str << " ";
        return;
    }

    for(int j=index; j<str.length(); j++) {
        //swapping
        swap(str[index],str[j]);

        //Recursion
        printPermutation(str,index+1);
        
        //Backtracking
        swap(str[index],str[j]);
    }
}


int main() {
    
    string str = "abc";
    int index = 0;
    printPermutation(str,index);
    
    return 0;
}

//OUTPUT : abc acb bac bca cba cab

