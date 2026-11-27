#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        if (x < 10){
            return true;
        }
        std::string str = std::to_string(x);
        int i = 0;
        int j = str.size() - 1;
        
        while(i < j){
            if (str[i] != str[j]){
                return false;
            } else {
                ++i;
                --j;
            }
        }

        return true;

    }
};
