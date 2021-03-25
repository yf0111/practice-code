class Solution {
public:
    int romanToInt(string s) {
        int sum=0,k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'&&s[i+1]=='V'){
                sum=sum+4;
                i++;
                k++;
                continue;
            }
            if(s[i]=='I'&&s[i+1]=='X'){
                sum=sum+9;
                i++;
                k++;
                continue;
            }
            if(s[i]=='X'&&s[i+1]=='L'){
                sum=sum+40;
                i++;
                k++;
                continue;
            }
            if(s[i]=='X'&&s[i+1]=='C'){
                sum=sum+90;
                i++;
                k++;
                continue;
            }
            if(s[i]=='C'&&s[i+1]=='D'){
                sum=sum+400;
                i++;
                k++;
                continue;
            }
            if(s[i]=='C'&&s[i+1]=='M'){
                sum=sum+900;
                i++;
                k++;
                continue;
            }
            //if(k==0){
            switch(s[i]){
                case 'I':
                    sum=sum+1;
                    break;
                case 'V':
                    sum=sum+5;
                    break;
                case 'X':
                    sum=sum+10;
                    break;
                case 'L':
                    sum=sum+50;
                    break;
                case 'C':
                    sum=sum+100;
                    break;
                case 'D':
                    sum=sum+500;
                    break;
                case 'M':
                    sum=sum+1000;
                    break;
            }
           // }
            cout<<i<<"^"<<sum<<"&";
        }
        return sum;
    }
};