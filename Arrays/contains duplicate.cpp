#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    
    bool containsDuplicate(vector<int>&nums){
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i<nums.size(); i++){
        if(nums[i] == nums[i+1]){
            return true;
        }
       
    }
     return false;
}
};
 int main(){
 Solution s;
 vector<int>nums = {3,1,4,2,2};
 cout<<(s.containsDuplicate(nums) ? "true" : "false")<<"\n";
 }
 
 