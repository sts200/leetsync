#include <cmath>

class Solution {
public:
    bool isPalindrome(int x) {
        // empty strings are palindromes
        if(x == 0){
            return true;
        }
        // negative numbers are never palindromes
        if (x < 0){
            return false;
        }

        // find how many places are in the number
        int x_log = std::log10(x);
        int x_log_floor = std::floor(x_log);

        // a multipler for flipping each digit in the number
        long mult = std::pow(10, x_log_floor);
        int rev = 0;
        int x_next = x;
        for(int i = 0; i < x_log + 1; i++){
            int ones = x_next % 10;
            x_next = (x_next - ones) / 10;
            rev += ones * mult;
            mult = mult / 10;
        }

        // check that original and reversed number are the same
        if(rev == x){
            return true;
        }
        
        return false;
    }
};
