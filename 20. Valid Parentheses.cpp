class Solution {
public:
    bool isValid(string s) {
        vector<int> array;
        int check=0;
        int checka;
        if(s.size()==1){
            return false;
        }
        for(int i=0;i<s.size();i++){
            switch(s[i]){
                case '(':
                    array.push_back(1);
                    break;
                case '{':
                    array.push_back(2);
                    break;
                case '[':
                    array.push_back(3);
                    break;
                case ')':
                    check=1;
                    checka=1;
                    break;
                case '}':
                    check=1;
                    checka=2;
                    break;
                case ']':
                    check=1;
                    checka=3;
                    break;
            }
            if(check==1){
                if(!array.empty()){
                    int temp=array.back();
                    array.pop_back();
                    cout<<"checka:"<<checka<<"temp:"<<temp<<endl;
                    if(temp!=checka){
                        return false;
                    }
                    else{
                        check=0;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(array.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};