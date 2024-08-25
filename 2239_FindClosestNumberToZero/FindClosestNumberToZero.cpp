class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int bestPos=nums[0];
        for(int i=1;i<nums.size();i++){
           if(abs(nums[i]) < abs(bestPos)){
                bestPos=nums[i];
           }
           if( nums[i]+bestPos == 0 ){
                bestPos=abs(bestPos);
           }
        }
        return bestPos;
    }
};