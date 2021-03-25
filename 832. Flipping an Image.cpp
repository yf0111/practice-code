using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int c=0;c<A.size();c++){
                if((A[c].size())%2==0){
                    for(int b=0,x=1;b<A[0].size()/2;b++,x++){
                        int temp;
                        temp=A[c][b];
                        A[c][b]=A[c][A[c].size()-x];
                        A[c][A[c].size()-x]=temp;
                    }
                }
                else if(A[0].size()%2!=0){
                    for(int b=0,x=1;b<(A[c].size()-1)/2;b++,x++){
                        int temp;
                        temp=A[c][b];
                        A[c][b]=A[c][A[c].size()-x];
                        A[c][A[c].size()-x]=temp;
                    }
                }
        }
        for(int c=0;c<A.size();c++){
            for(int b=0;b<A[0].size();b++){
                if(A[c][b]==0){
                    A[c][b]=1;
                    continue;
                }
                else if(A[c][b]==1){
                    A[c][b]=0;
                }
            }
        }
        return A;
    }
};