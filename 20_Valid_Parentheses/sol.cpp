class Solution {
public:
    bool isValid(string s) {
        stack <char> remaining;
        for (int i = 0; i< s.size(); i++){
            if (s[i] == '{' || s[i] == '(' || s[i] == '['){
                remaining.push(s[i]);
            }else if (s[i] == '}' || s[i] == ')' || s[i] == ']'){
                if (remaining.size()==0) 
                    return false;
                char check  = remaining.top();
                if (check == '(' && s[i]==')'){
                    remaining.pop();
                }else if (check == '{' && s[i]=='}'){
                    remaining.pop();
                }else if (check == '[' && s[i]==']'){
                    remaining.pop();
                }else{
                    return false;
                }
            }
        }
        if (remaining.size()!=0) 
                    return false;
        return true;
    }
};
