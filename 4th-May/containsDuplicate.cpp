#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//brute force using 2 loops

// int main(){
//     vector<int> nums = {1, 2, 3, 1};

//     for(int i = 0; i < nums.size(); i++){
//         for( int j = i + 1; j < nums.size(); j++){
//             if(nums[i] == nums[j]){
//                 cout << "Contains duplicate: " << true << endl;
//                 return 0;
//             }
//         }
//     }
//     cout << "Contains duplicate: " << false << endl;
//     return 0;
// }

//optimized using hash set

int main(){
    vector<int> nums = {1,2,3,4,1};
    unordered_map<int, int> hash;

    for(int num: nums){
        if(hash.find(num) != hash.end()){
            cout << "Contains duplicate: " << true << endl;
            return 0;
        }
        hash[num] = 1; // mark the number as seen
    }
    cout << "Contains duplicate: " << false << endl;
    return 0;
}