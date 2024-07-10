#include<iostream>
using namespace std;

bool checkPalindrome(string str,int start,int end) {
    //base case
    if(start >= end) return true;

    //1 case
    if(str[start] != str[end]) {
        return false;
    }

    return checkPalindrome(str, start+1, end-1);
}


int main() {
    string s;
    cin >> s;
    int start = 0;
    int end = s.size() - 1;
    cout << checkPalindrome(s,start,end) << endl;   
    
    return 0;
}