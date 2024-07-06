// Print the all occurences of a target using Recursion
#include <iostream>
using namespace std;

void solve(int *arr, int size, int index, int target)
{
    if (index >= size)
        return;

    if (arr[index] == target)
        cout << index << " ";

    solve(arr, size, index + 1, target);
}

int main()
{
    int arr[] = {10, 203, 21, 41, 4, 21, 21, 22, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    solve(arr,size,index,21);

    return 0;
}