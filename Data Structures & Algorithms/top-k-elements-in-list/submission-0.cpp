class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<pair<int,int>>p;
        vector<int>ans;
        for(int i=0;i<n;i++){
           mp[nums[i]]++;
        }
        for(auto it:mp){
            p.push_back({it.second,it.first});
        }
        sort(p.begin(),p.end(),greater<pair<int, int>>());
        int cnt=0;
        for(auto &it:p){
            if(cnt!=k){
             ans.push_back(it.second);   
             cnt++;
            }
        }
        return ans;
    }
};
