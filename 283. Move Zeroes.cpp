class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=0;
        for(int i=0;a<nums.size()-1&&i<nums.size();i++){
            a++;
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                i=i-1;
            }
            else continue;
        }
    }
};