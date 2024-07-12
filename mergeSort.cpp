#include<iostream>
using namespace std;    

void merge(int arr[],int start,int end) {
    //Find Mid
    int mid = (start+end)/2;

    //find length of left and right array
    int length_of_Left = mid-start+1;
    int length_of_right = end - mid;

    //Create left and right array
    int* leftArr = new int[length_of_Left];
    int* rightArr = new int[length_of_right];

    //copy values from original array to left array
    //index from start to mid-s+1
    int k = start; //k is the index counter on main array
    for(int i=0; i<length_of_Left; i++) {
        leftArr[i] = arr[k];
        k++;
    }

    //Copy values from the original array to right array
    //index mid+1 to end
    k= mid + 1;
    for(int i=0; i<length_of_right; i++) {
        rightArr[i] = arr[k];
        k++;
    }

    /****  ACTUAL MERGE LOGIC STARTS FROM HERE ****/
    //left array is sorted 
    //right array is sorted

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start; // Yahan Par galti hoti hai

    while(leftIndex < length_of_Left && rightIndex < length_of_right){
        if(leftArr[leftIndex] < rightArr[rightIndex]) {
            arr[mainArrayIndex] = leftArr[leftIndex];
            leftIndex++;
            mainArrayIndex++;
        }
        else {
            arr[mainArrayIndex] = rightArr[rightIndex];
            rightIndex++;
            mainArrayIndex++;
        }
    }

    /**** 2 MORE IMPORTANT CASES ****/
    //case 1: left array mein elements khtam hogaye but right array mein elements bach gaye hain
    while(rightIndex < length_of_right) {
        arr[mainArrayIndex] = rightArr[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }

    //case 2: right array mein elements khatam hogaye but left array mein elements bach gaye hain
    while(leftIndex < length_of_Left) {
        arr[mainArrayIndex] = leftArr[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }

    /**** DELETING THE DYNAMICALLY ALLOCATED LEFT AND RIGHT ARRAY ****/
    delete[] leftArr;
    delete[] rightArr;


}

void mergeSort(int arr[],int start,int end) {
    //Base Case
    if(start > end) {
        //invalid array
        return;
    }

    if(start == end) {
        //single element
        return;
    }

    //Step 1: Break the array
    int mid = (start+end)/2;
    // from start to mid --> left wala array
    // from mid+1 to end --> right wala array


    //step 2: Using Recursion to sort left array and right array
    //for left array
    mergeSort(arr,start,mid);

    //for right array
    mergeSort(arr,mid+1,end);

    //Step 3: Merge two sorted array
    merge(arr,start,end);
}



int main() {
    
    int arr[] = {2,1,4,9,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start  = 0;
    int end = size-1;

    mergeSort(arr,start,end);
    
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}