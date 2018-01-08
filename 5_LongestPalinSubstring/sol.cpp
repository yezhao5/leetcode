class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() ==0 ||s.size() == 1) return s;
        //assume each char can be the middle of the palindrom
        //if two adjcent chars are the same, assume it to be the middle
        int max = 1, end = 0, start = 0;
        for (int i = 0; i < s.size()-1; i++){
            int im, ie, is;
            //case single middle
            if(s[i+1] != s[i]){
                im=1; is=i; ie=i;
                int a=1;
                while(i-a > -1 && i+a < s.size()){
                    if(s[i-a] == s[i+a]){
                        is = i-a;
                        ie = i+a;
                        im = im + 2;
                    }
                    a++;
                }
            }
            //assume double middle
            if(s[i+1] == s[i]){
                im = 2; is = i, ie = i+1;
                int a = 1;
                while(i-a > -1 && i+a+1 < s.size()){
                    if(s[i-a] == s[i+a+1]){
                        is = i-a;
                        ie = i+a+1;
                        im = im + 2;
                    }
                    a++;
                }
            }
            if(im> max) {
                max = im;
                start = is;
                end = ie;
            }
        }
        return s.substr(start, max);

    }
};
