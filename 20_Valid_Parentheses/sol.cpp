class Solution {
public:
    bool isValid(string s) {
        std::stack <char> remaining;
        for (int i = 0; i< s.size(); i++){
            if (string[i] == '{' || string[i] == '(' || string[i] == '['){
                remaining.push(string[i]);
            }else (string[i] == '}' || string[i] == ')' || string[i] == ']'){
                if (remaining.size()==0) return false;
                char check  = remaining.top();
                if (check == '(' && string[i]==')'){
                    remaining.pop();
                }else if (check == '{' && string[i]=='}'){
                    remaining.pop();
                }else if (check == '[' && string[i]==']'){
                    remaining.pop();
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
