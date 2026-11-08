#include <cstring>

class Solution {
public:
    int romanToInt(string s) {
        // dictionary of char, int
        // example.find(key);
        // hard check for combos
        // usually largest left to right
        // I before V and X
        // X before L and C
        // C before D and M
        // if smaller symbol before larger, subtraction
        // need keep track of prev symbol
        // char*? ++?
        // int result

        std::map<char, int> symbol = {
            {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000},
        };

        int result = 0;
        int size = s.size();
        for (int i = size - 1; i >= 0; i--){
            
            char sym = s[i];
            int val = symbol[sym];
            int sub = 0;

            if(i != 0){
                if(sym == 'V' || sym == 'X'){
                    if(s[i - 1] == 'I'){
                        sub = 1;
                        i--;
                    }
                } else if(sym == 'L' || sym == 'C'){
                    if(s[i - 1] == 'X'){
                        sub = 10;
                        i--;
                    }
                } else if(sym == 'D' || sym == 'M'){
                    if(s[i - 1] == 'C'){
                        sub = 100;
                        i--;
                    }
                }
            }
            result += (val - sub);
        }
        return result;
    }
};
