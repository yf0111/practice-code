class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int now=0,max=0;
        for(int k=0;k<nums.size();k++){
            if(nums[k]==1){
                now=now+1;
            }
            else{
                now=0;
            }
            if(now>max)max=now;
        }
		return max;
    }
};