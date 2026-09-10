class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0);
        for(char c: s){
            freq[c- 'a']++;
        }
        if (s.length() != t.length()){
             return false;
        }    
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
             return s == t;
    }
};
