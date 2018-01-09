class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        if (strs.size()==1) return strs[0];
        string to= strs[0];
        for(int j = 1; j <strs.size(); j++){
            string curr = "";
            for (int i = 0; i < fmin(to.size(), strs[j].size()) && to[i] == strs[j][i]; i++) {
                    curr.push_back(to[i]);

            }
            to=curr;
        }
        return to;
    }

};
