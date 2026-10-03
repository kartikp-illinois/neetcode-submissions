class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        unordered_map<string, vector<string>> words;
        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort(key.begin(), key.end());
            words[key].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto& it : words) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
