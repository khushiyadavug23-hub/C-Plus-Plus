class Solution {
public:
    void solve(int ind , vector<string>& ans , string digits , string mapping[] , string output){
        if(ind>=digits.length()) {
            ans.push_back(output);
            return ;
        }
        int num = digits[ind]-'0';
        string value = mapping[num];
        for(int i=0 ; i<value.size() ; ++i){
            output.push_back(value[i]);
            solve(ind+1 , ans , digits , mapping , output);
            output.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output = "";
        int ind = 0;
        if(digits.length()==0) return ans;
        string mapping[10]={"", "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
        solve(ind , ans , digits , mapping ,output);
        return ans;
    }
};
