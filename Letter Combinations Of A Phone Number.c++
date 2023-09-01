#include<map>
void generateCombinations(const vector<string>& input,string current, int index,vector<string>& result) {
    if (index == input.size()) {
        result.push_back(current);
        return;
    }

    for (char c : input[index]) {
        generateCombinations(input, current + c, index + 1, result);
    }
}

vector<string> combineStrings(const vector<string>& input) {
    vector<string> result;
    generateCombinations(input, "", 0, result);
    return result;
}
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<int,string>s;
        s[2]="abc";
        s[3]="def";
        s[4]="ghi";
        s[5]="jkl";
        s[6]="mno";
        s[7]="pqrs";
        s[8]="tuv";
        s[9]="wxyz";
        vector<string>a;
        vector<string>ans;
        for(int i=0;digits[i]!='\0';i++)
        {
            int x=digits[i]-48;
            a.push_back(s[x]);
        }
        if(a.size()>0)
        ans=combineStrings(a);
        return ans;
    }
};
