class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<pair<int,int>>v;
      for(int i=0;i<nums.size();i++){
        v.push_back({nums[i],i});
      } 
      sort(v.begin(),v.end());
      int i=0;
      int j=v.size()-1; 
     while(i<j){
        int sum=v[i].first+v[j].first;
        if(sum==target){
            vector<int>v1;
            v1.push_back(v[i].second);
            v1.push_back(v[j].second);
            sort(v1.begin(),v1.end());
            return v1;
        }
         
        else if(sum<target)
         i++;
        else
         j--;  
     }
     return {};
    }
};
