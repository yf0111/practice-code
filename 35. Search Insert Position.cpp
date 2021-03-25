class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target) {
                if(i==nums.size()-1){
                    return i+1;
                }
                continue;
            }
            if(nums[i]==target) return i;
            if(nums[i]>target){
                return i;
            }
        }
        return 0;
    }
};