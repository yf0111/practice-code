#include <math.h>
class Solution {
public:
    int hammingDistance(int x, int y) {
        int xarray[31],yarray[31],num=0;
        for(int a=30;a>=0;a--){
           // xarray[a-1]=(x%pow(2,a));
            xarray[a]=x%2;
            x=x/2;
        }
        for(int a=30;a>=0;a--){
           // xarray[a-1]=(x%pow(2,a));
            yarray[a]=y%2;
            y=y/2;
        }
        for(int a=0;a<31;a++){
            if(xarray[a]==yarray[a]){
                continue;
            }
            else if(xarray[a]!=yarray[a]){
                num=num+1;
            }
        }
        return num;
    }
};