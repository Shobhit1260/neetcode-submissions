class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        int n=nums.size();
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int cnt=1;
        int mx=1;

        auto it=s.begin();
            while(next(it)!=s.end()){
                if(*next(it)-*it == 1){
                  cnt++;
                  mx=max(mx,cnt);
                }
                else 
                  cnt=1;
                
                it=next(it); 
            }
        return mx;

    }
};
