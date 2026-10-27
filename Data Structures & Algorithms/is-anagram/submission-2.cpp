class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
         return 0;
    //     else{ 
    //  unordered_set<char>st;
    //  for(auto i=0;i<s.size();i++){
    //     st.insert(s[i]);
    //  }
    //  unordered_map<char,int>mps;
    //  unordered_map<char,int>mpt;
    //  for(int i=0;i<s.size();i++){
    //     mps[s[i]]++;
    //     mpt[t[i]]++;
    //  }
    //  for(auto it:st){
    //     if(mps[it]!=mpt[it])
    //      return 0;
    //  } 
    //  return 1;  
    // }
       vector<int>v(26,0);
       for(int i=0;i<s.length();i++){
         v[s[i]-'a']++;
         v[t[i]-'a']--;
       }
       for(auto it:v){
        if(it!=0)
         return 0; 
       }
       return 1;
    }
};
