class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() ==0 ||s.size() == 1) return s;
        //assume each char can be the middle of the palindrom
        //if two adjcent chars are the same, assume it to be the middle
        int max = 1, start = 0;
        for (int i = 0; i < s.size()-1; i++){
            int im, is;
            //skip duplicate
            int d = 0;
            while(i+d < s.size() &&  s[i+d+1] == s[i]){
                d++;
            }

            im = d+1; is = i;
            int b = 1;

            while(i-b > -1 && i+b+d < s.size() && s[i-b] == s[i+b+d]){
                //cout<<"here"<<endl;
                is = i-b;
                im = 2*b + d + 1;

                b++;
            }
            if(im> max) {
                max = im;
                start = is;
            }
        }
        return s.substr(start, max);

    }
};
