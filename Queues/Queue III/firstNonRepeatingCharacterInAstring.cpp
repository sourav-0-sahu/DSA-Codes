#include<iostream>
#include<queue>
using namespace std;

int firstNonRepeating(string str) {
    int ans = -1;
    queue<int> q;
    int map[300] = {0};

    for(int i=0; i<str.length(); i++) {
        char currElement = str[i];
        //step 1: store count
        map[currElement] = map[currElement] + 1;

        //step 2: push the index of the curr Element to the queue
        q.push(i);

        //step 3: answer
        while(!q.empty()) {
            int frontIndex = q.front();

            char frontElement = str[frontIndex]; //front Element of queue
            //if the count of the character is more than 1 ,it is a repeating character so pop its index from queue
            if(map[frontElement] > 1) {
                q.pop();
            }
            else {
                ans = q.front();
                break;
            } 
        }

        if(q.empty()) {
            ans = -1;
        }

    }

    return ans;
}


int main() {
    
   string str = "ceetcode";
   cout << firstNonRepeating(str) << endl;
    
    return 0;
}