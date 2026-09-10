class Solution {
public:
    int countPalindromicSubsequence(string s) {
      vector<int> first(26,-1);
      vector<int> last(26,-1);

      for(int i=0;i<s.length();++i){
        int curr =s[i]-'a';
        if(first[curr]==-1){
            first[curr]=i;
        }
        last[curr]=i;
      }
      int ans =0;
      for(int i=0;i<26;++i){
        if(first[i]!=-1 && last[i]>first[i]+1){
            unordered_set<char> middle_chars;
            for(int j=first[i]+1; j<last[i]; ++j){
                middle_chars.insert(s[j]);
            }
            ans += middle_chars.size();
        }
      }
      return ans;
    }
};