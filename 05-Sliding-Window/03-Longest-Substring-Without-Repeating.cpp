#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//        unordered_map<char,int>mp;
//         int left=0;
//         int ans=0;
//        for(int i=0;i<s.size();i++)
//        {
//         if(mp.find(s[i]) != mp.end() && mp[s[i]] >= left)
//         {
//           left= mp[s[i]]+1;
//         }
//         mp[s[i]]=i;

//         ans=max(ans,i-left+1);
//        }
//        return ans;
//     }
// };





class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<bool>frq(255,0);
       int  st=0 , end =0 , len =0,ans=0;
       while(end<s.size())
       {
          while(frq[s[end]])
          {
            frq[s[st]]=0;
            st++;
          }
          frq[s[end]]=1;
           ans=max(ans,end-st+1);
          end++;
       }
       return ans;
    }
};


int main()
{
    Solution s;
    string str= "abcabcbb";
    int out=s.lengthOfLongestSubstring(str);
    cout<<out;
}