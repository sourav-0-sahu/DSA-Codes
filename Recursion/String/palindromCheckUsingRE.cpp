#include<iostream>
using namespace std;

bool checkPalindrome(string str,int start,int end) {
    //base case
    if(start > end) return true;

    //operation
    if(str[start] == str[end]) {
        bool aageKiAns = checkPalindrome(str,start+1,end-1);
        return aageKiAns;
    }
    //Agar opar ka 2 statement true return nahi kar paye iska matlab string palindrome nahi hai
    return false;
}


int main() {
    string s;
    cin >> s;
    int start = 0;
    int end = s.size() - 1;
    cout << checkPalindrome(s,start,end) << endl;   
    
    return 0;
}