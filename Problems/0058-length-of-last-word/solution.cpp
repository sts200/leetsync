class Solution {
public:
    int lengthOfLastWord(string s) {
        bool stop = false;
        bool trailing = true;
        int end = s.size() - 1;
        while(trailing){
            if(s[end] == ' '){
                s = s.substr(0, end);
                end--;
            } else {
                trailing = false;
            }
        }

        

        while(!stop){
            int pos = s.find(' ');
            if(pos != std::string::npos){
                s = s.substr(pos + 1);
            } else {
                stop = true;
            }
        }
        return s.size();
    }
};
