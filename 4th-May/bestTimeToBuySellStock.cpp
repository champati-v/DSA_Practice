#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>

using namespace std;

//brute force using 2 loops
// int main(){
//     vector<int> prices = {7, 1, 5, 3, 6, 4};
//     int maxProfit = 0;

//     for(int i = 0; i < prices.size(); i++){
//         for(int j = i + 1; j < prices.size(); j++){
//             int profit = prices[j] - prices[i];
//             if(profit > maxProfit){
//                 maxProfit = profit; // update maximum profit
//             }
//         }
//     }
//     cout << "Maximum profit: " << maxProfit << endl;
//     return 0;
// }

//optimized using single pass

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > minPrice){
            maxProfit = max(maxProfit, prices[i] - minPrice); // update maximum profit
        }
        minPrice = min(minPrice, prices[i]); // update minimum price
    }

    cout << "Maximum profit: " << maxProfit << endl;
    return 0;
}