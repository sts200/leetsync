#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        // odd number of chars is always invalid
        if(s.size() % 2 == 1){
            return false;
        }

        std::stack<char> opener_stack;
        std::unordered_map<char, char> brackets = {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };

        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            if(c == '(' || c == '{' || c == '['){
                opener_stack.push(c);
            }else if(c == ')' || c == '}' || c == ']'){
                if (!opener_stack.empty() && opener_stack.top() == brackets[c]){
                    opener_stack.pop();
                }else{
                    return false;
                }
            }
        }
        if(opener_stack.size() == 0){
            return true;
        }
        return false;
    }
};
