#include<iostream>
#include<vector>
using namespace std;

void printSubArray_Util(vector<int> &nums,int start,int end) {
    //Base Case
    if(end == nums.size()) return;

    //Print
    for(int i=start; i<=end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    //Recursion
    printSubArray_Util(nums,start,end+1);
}

void printSubArray(vector<int>& nums){
    int n = nums.size();

    for(int start=0; start<n; start++) {
        int end = start;
        printSubArray_Util(nums,start,end);
    }
}

int main() {
    
    vector<int> nums{1,2,3,4,5};
    //g++ -std=c++11 AllSubArrays.cpp
    printSubArray(nums);
    return 0;
}   