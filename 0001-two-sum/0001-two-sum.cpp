class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        for(int a=0; a<=nums.size()-2; a++){
            for(int b=a+1; b<=nums.size()-1; b++){
                if(nums[a]+nums[b]==target){
                    result.push_back(a);
                    result.push_back(b);
                }
            }
        }
        return result;        
    }
};