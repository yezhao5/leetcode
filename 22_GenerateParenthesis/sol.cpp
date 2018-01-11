class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> to;
        bt(to, 0, 0, "", n);
        return to;
    }

    void bt(vector<string> & list, int open, int close, string to, int n){
        if(to.size() == n*2){
            list.push_back(to);
            return;
        }
        if(open < n){
            bt (list, open+1, close, to + "(", n);
        }
        if(open > close){
            bt (list, open, close+1, to +")", n);
        }

    }
};
