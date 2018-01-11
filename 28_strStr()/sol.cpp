class Solution {
public:
    int strStr(string haystack, string needle) {
        //O(m*n)
        if(needle.size()==0) return 0;

        if(haystack.size()==0) return -1;

        for(int i = 0; i<haystack.size(); i++){
            int j=0;
            //cout<< "i is" << i << endl;
            if(needle.size()+i > haystack.size()) return -1;
            while(haystack[i+j] == needle[j]){
                //cout<< needle[j] << endl;
                j++;
                if( j == needle.size()){
                    return i;
                }
            }
        }
        return -1;
    }
};
