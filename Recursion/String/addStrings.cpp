#include<iostream>
using namespace std;

 string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        // Handle empty strings
        if (num1.empty() && num2.empty()) {
            return "0";
        } else if (num1.empty()) {
            return num2;
        } else if (num2.empty()) {
            return num1;
        }

        string ans = "";
        int carry = 0;

        while (i >= 0 || j >= 0 || carry > 0) { 
            //convert the char into digit
            int d1 = (i >= 0) ? (num1[i] - '0') : 0;
            int d2 = (j >= 0) ? (num2[j] - '0') : 0;
            //Add
            int sum = d1 + d2 + carry;
            //push the remainder into ans string,
            int quotient = sum / 10;
            int remainder = sum % 10;
            //convert the num back into char
            char rem = remainder + '0';
            ans.push_back(rem);
            --i;
            --j;
            carry = quotient; // Update carry for next iteration
        }
        //reverse
        reverse(ans.begin(),ans.end());
        return ans;
    }


int main() {
    
    string str1 = "1269";
    string str2 = "735";

    string ans = addStrings(str1,str2);

    cout << ans << endl;
    
    return 0;
}