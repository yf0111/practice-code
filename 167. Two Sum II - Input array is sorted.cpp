class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum;
        vector<int> ivec;
        
        for(int i=0;i<numbers.size();i++){
            
            for(int j=0;j<numbers.size();j++){
                
                if(j==i){
                    continue;
                }
                //cout<<numbers[i]<<"+"<<numbers[j]<<"  &&  ";
                sum=numbers[i]+numbers[j];
                if(sum==target){
                    // cout<<numbers[i]<<"+"<<numbers[j]<<"數字是多少"<<endl;
                    // cout<<i<<"+"<<j<<"ij是多少";
                    if(numbers[i]>numbers[j]){
                        ivec.push_back(j+1);
                        ivec.push_back(i+1);
                    }
                    if(numbers[i]<numbers[j]){
                        ivec.push_back(i+1);
                        ivec.push_back(j+1);
                    }
                    if(numbers[i]==numbers[j]){
                        ivec.push_back(i+1);
                        ivec.push_back(j+1);
                    }
                    return ivec;
                }
            }
        }
        return ivec;
    }
};