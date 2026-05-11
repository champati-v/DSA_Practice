#include<iostream>
using namespace std; 

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2;  can lead to failed test cases
    int mid = start + (end - start) / 2; // This is the correct way to calculate mid

    while(start <= end) {
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1; // Key not found
}

int main() {
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    cout << "Index of 12 in even array: " << binarySearch(even, 6, 12) << endl;
    cout << "Index of 11 in odd array: " << binarySearch(odd, 5, 11) << endl;

    return 0;
}