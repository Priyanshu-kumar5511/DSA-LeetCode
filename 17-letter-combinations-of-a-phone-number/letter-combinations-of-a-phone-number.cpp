class Solution {
public:
  
  void storeString(string s , int i,vector<string>&ans, string &temp,unordered_map<char, string> mp )
  {
    if(i==s.size())
    {
        ans.push_back(temp);
        return ;
    }

    string latter = mp[s[i]];

    for(char x:latter)
    {
       temp.push_back(x);
       storeString(s,i+1,ans,temp,mp);
       temp.pop_back();
    }
  }

    vector<string> letterCombinations(string digits) {
          vector<string>ans;
         if (digits.empty())
         {   return ans;}

    
        unordered_map<char, string> mp;
         


        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

           string temp = "";
      storeString(digits, 0, ans,temp,mp);
   return ans;
    }
};