class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>s;
        for(auto &i:nums){
            s.insert(i);
        }
        if(s.size()!=nums.size())
         return 1;
        else
         return 0; 
    }
};
