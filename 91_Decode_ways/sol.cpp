class Solution {
public:
    int num = 0;
    int numDecodings(string s) {
        if(s.size()==0 || s.size（） == -1){
            return 0;
        }
        if (s.size == 1 || (s.size()>1 && s[1]!=0)){
            num ++;
            numDecoding(s.substr(1,s.size-1));
        }
        if (s.size > 1){
            int two = atio(s.substr(0,1));
            if(two < 27){
                num++;
                numDecoding (1, s.substr(2,s.size-2));
            }
        }
        return num;
    }
};
