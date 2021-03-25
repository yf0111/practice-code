class Solution {
public:
    bool isPalindrome(int x) {
        string xs=to_string(x),answers="";
        for(int i=xs.size()-1;i>=0;i--){
            answers=answers+xs[i];
        }
        if(answers==xs){
            return true;
        }
        else{
            return false;
        }
        return true;
    }
};