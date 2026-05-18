#include<iostream>
#include<vector>

using namespace std;

int findPivot(vector<int>& nums, int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(nums[mid] >= nums[0]){
            start = mid + 1;
        }
        else {
            end = mid;
        }

        mid = start + (end - start)/2;
    }
    return start;
}

int binarySearch(vector<int>& nums, int start, int end, int target){
    int mid = start + (end - start)/2;

    while(start <= end){
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,4,5,6,7,0};
    int target = 0;
    int n = nums.size();
    int pivot = findPivot(nums, n);

    if(target >= nums[pivot] && target <= nums[n-1]){
        cout << binarySearch(nums, pivot, n-1, target) << endl;
    }
    else{
        cout << binarySearch(nums, 0, pivot-1, target) << endl;
    }
    
    return 0;
}