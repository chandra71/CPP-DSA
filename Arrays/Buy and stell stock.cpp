#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxProfit(vector<int>& price){
        int buy = 0;
        int sell = 1;
        int profit = 0;
        
        while(sell<price.size()) {
            profit = max(profit, price[sell]-price[buy]);
            
       
        if(price[sell]<price[buy]){
        buy = sell;
        
        
    }
    
    sell++;
}
return profit;
}
};

int main() {
    Solution s;
    vector<int> prices = {7, 1, 5, 3, 6};
    cout << s.maxProfit(prices) << endl;  // Output: 5
    return 0;
}