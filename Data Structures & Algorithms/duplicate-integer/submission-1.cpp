class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // set<int>s;
        // for(auto &i:nums){
        //     s.insert(i);
        // }
        // if(s.size()!=nums.size())
        //  return 1;
        // else
        //  return 0; 

        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<mp.size();i++){
           if(mp[nums[i]]!=1)
            return 1; 
        }
        return 0;
    }
};
