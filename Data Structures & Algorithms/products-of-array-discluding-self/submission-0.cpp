class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>output;
        int n=nums.size();
        int prod=1;
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
           prefix[i]=prefix[i-1]*nums[i];
        }
        for(int i=n-2;i>=0;i--){
           suffix[i]=suffix[i+1]*nums[i];
        }
        for(int i=0;i<n;i++){
            if(i==0)
              output.push_back(suffix[1]); 
            else if(i>0 && i<n-1)
              output.push_back(prefix[i-1]*suffix[i+1]);
            else
              output.push_back(prefix[i-1]);  
        }
        return output;
    }
};
