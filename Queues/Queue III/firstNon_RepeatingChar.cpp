#include<iostream>
#include<queue>
using namespace std;

int main() {
    string str = "ababc";
    queue<char> q;

    //Frequency Table
    int freq[26] = {0};

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        freq[ch-'a']++;
        q.push(ch);

        //Answer find karo
        while(!q.empty()) {
            char frontCharacter = q.front();

            if(freq[frontCharacter-'a'] > 1) {
                //Answer nahi hai
                q.pop();
            }
            else {
                // == 1 wala case
                //yehi answer hai
                cout << frontCharacter << " ";
                break;
            }
        }

        if(q.empty()) {
            //koi answer nahi hai
            cout << "#" << " ";
        }
    }
    
    
    return 0;
}