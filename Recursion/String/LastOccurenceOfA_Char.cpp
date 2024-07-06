#include<iostream>
using namespace std;

void lastOccurenceFromLTR(string& s,char ch,int index,int& ans) {
    //Base Case
    if(index >= s.length()) {
        return;
    }

    //Ek case hum solve karenge
    if(s[index] == ch) {
        ans = index;
    }
    lastOccurenceFromLTR(s,ch,index+1,ans);
}

void lastOccurenceFromRTL(string& s,char ch,int index, int& ans) {
    //Base Case
    if(index < 0) return;

    //Ek Case
    if(s[index] == ch) {
        ans = index;
        return;
    }
    else {
        lastOccurenceFromRTL(s,ch,index-1,ans);
    }
}


int main() {
    
    string s;
    cin >> s;

    char ch;
    cin >> ch;

    int ans = -1;
    // lastOccurenceFromLTR(s,ch,0,ans);
    // cout << ans << endl;

    lastOccurenceFromRTL(s,ch,s.size(),ans);
    cout << ans << endl;
    
    return 0;
}