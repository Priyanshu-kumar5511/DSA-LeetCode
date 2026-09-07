class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int count =0;
        unordered_map<char,int>mpp;
        // unordered_map<char,int>mpp;
      for(int i=0 ;i<s.size() ;i++)
      {
        // mp[s[i]]=i;
        mpp[t[i]]=i;
      }
      
        for(int i=0;i<s.size();i++)
        {
            if(mpp.find(s[i]) != mpp.end())
            {
                count += abs(i-mpp[s[i]]);
            }
           
        }
        return count;
    }
};