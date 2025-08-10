class Solution {
public:
    bool isValid(string& s) {
        if(s.empty()) return false;

        for(char ch : s)
            if(!isalnum(ch) && ch != '_') return false;
        return true;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {

        // regex pattern(R"(\w+)");

        vector<vector<string>> valid;

        for (int i = 0; i < code.size(); i++) {
            if (isActive[i])
                if (isValid(code[i]))// if (regex_match(code[i], pattern))
                    if (businessLine[i] == "electronics" || businessLine[i] == "grocery" || businessLine[i] == "pharmacy" || businessLine[i] == "restaurant")
                        valid.push_back({businessLine[i], code[i]});
        }

        sort(valid.begin(), valid.end());

        vector<string> validCode;

        for (int i = 0; i < valid.size(); i++)
            validCode.push_back(valid[i][1]);

        return validCode;
    }
};