// class Solution {  本來想交這個但是不能交
// public:
//     int reverse(int x) {
//         int answer;
//         string xs = to_string(x),answers="";
//         std::string::size_type i;
//         if(x<0){
//             for(int i=xs.size()-1;i>=1;i--){
//                 answers=answers+xs[i];
//             }
//             answer=stoi(answers,&i,10);
//             stringstream ss;
            
//             answer*=-1;
//         }
//         else{
//             for(int i=xs.size()-1;i>=0;i--){
//                 answers=answers+xs[i];
//             }
//             answer=stoi(answers,&i,10);
//         }
//         return answer;
//     }
// };
class Solution{
  public:
    int reverse(int x) {
        long long int ans=0;
        while(x!=0)
        {
            ans=(ans*10) +(x%10);
            x/=10;
            if(ans> INT_MAX)
                return 0;
            if(ans<INT_MIN)
                return 0;
        }
        return ans;
    }
};
