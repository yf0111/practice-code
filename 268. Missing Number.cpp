class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num;
        vector<int> ivec(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){//給ivec值
            ivec[nums[i]]=1;
            
        }
        /*for(int a=0;a<ivec.size();a++){
            cout<<ivec[a]<<"*";
        }*/
        for(int j=0;j<ivec.size();j++){
            if(ivec[j]==1){
                continue;
            }
            else if(ivec[j]==0){
                num=j;
                return j;
            }
        }
        return num;
    }
};