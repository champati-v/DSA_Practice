#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

// brute force using 2 loops
// int main(){
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;

//     for(int i=0; i<nums.size(); i++){
//         for(int j=i+1; j<nums.size(); j++){
//             if(nums[i] + nums[j] == target){
//                 cout << "Indices: " << i << " and " << j << endl;
//                 return 0;
//             }
//         }
//     }

//     cout << "No two sum solution found." << endl;
//     return 0;
// }

//optimized using hash map
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    unordered_map<int, int> numMap; // value to index mapping

    for(int i=0; i<nums.size(); i++){
        int complement = target - nums[i];
        if(numMap.find(complement) != numMap.end()){
            cout << "Indices: " << numMap[complement] << " and " << i << endl;
            return 0;
        }
        numMap[nums[i]] = i; // store the index of the current number
    }

    cout << "No two sum solution found." << endl;
    return 0;
}