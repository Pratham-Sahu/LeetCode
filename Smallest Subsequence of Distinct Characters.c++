class Solution {
public:
    string smallestSubsequence(string s) {
    vector<int> lastOccurrence(26, -1); 
    vector<bool> used(26, false);
    string result;

    for (int i = 0; i < s.size(); ++i) {
        lastOccurrence[s[i] - 'a'] = i;
    }

    for (int i = 0; i < s.size(); ++i) {
        if (used[s[i] - 'a']) continue; 

        
        while (!result.empty() && s[i] < result.back() && lastOccurrence[result.back() - 'a'] > i) {
            used[result.back() - 'a'] = false;
            result.pop_back();
        }

        result += s[i];        
        used[s[i] - 'a'] = true; 
    }

    return result;
}
};
