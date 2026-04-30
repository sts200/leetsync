class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int size = target.size();
        
        for (int i = 1; i < target[size - 1] + 1; i++){
            if(count(target.begin(), target.end(), i) == 0){
                ans.push_back("Push");
                ans.push_back("Pop");
            }else{
                ans.push_back("Push");
            }
        }
        return ans;
    }
};
