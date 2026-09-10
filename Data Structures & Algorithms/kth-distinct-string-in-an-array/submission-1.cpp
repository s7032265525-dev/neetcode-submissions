class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>countMap;
        for(const string& str: arr){
            countMap[str]++;
        }
        int distinctCounter =0;
        for(const string& str: arr){
            if(countMap[str]==1){
                distinctCounter++;
                if(distinctCounter ==k){
                    return str;
                }
            }
        }
        return "";
    }
};