#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums){
    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(nums[mid] >= nums[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }

        mid = start + (end - start)/2;
    }
    return start;
}

int main(){ 
    vector<int> nums = {4,5,6,7,0,1,2};
    cout << pivotIndex(nums) << endl;
    return 0;
}