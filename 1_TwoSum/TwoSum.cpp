#include <unordered_map>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> map_;
        for(int i=0;i<nums.size();i++){
            int missing=target - nums[i];
            if(map_.contains(missing)){
                return {map_[missing],i};
            }
            map_[nums[i]]=i;
        }

        
        return {};
    }
};