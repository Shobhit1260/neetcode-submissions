class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string s=strs[i];
            string t=s;
            sort(s.begin(),s.end());
            mp[s].push_back(t);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
