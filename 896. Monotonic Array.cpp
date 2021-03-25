class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int c;
            for(int b=0;b<A.size()-1;b++){
                if(A[b]<A[b+1]){
                    c=0;
                    break;
                }
                if(A[b]>A[b+1]){
                    c=1;
                    break;
                }
                if(A[b]==A[b+1]){
                    continue;
                }
            }
            if(c==0){
                for(int a=0;a<A.size()-1;a++){
                    if(A[a]<A[a+1]){ 
                        //continue;
                    }
                    if(A[a]==A[a+1]){
                        //continue;
                    }
                    if(A[a]>A[a+1]){
                        return false;
                    }
                }
            }
            if(c==1){
                for(int a=0;a<A.size()-1;a++){
                    if(A[a]>A[a+1]){ 
                        //continue;
                    }
                    if(A[a]==A[a+1]){
                        //continue;
                    }
                    if(A[a]<A[a+1]){
                        return false;
                    }
                }
            }
        return true;
    }
};