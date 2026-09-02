class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       unordered_map<char, int> mp;

        for(char x : allowed)
        {
             mp[x]++;
        }

        int count=0;

        for(int i=0 ;i<words.size() ;i++)
        {  bool flag =true;
            string str =words[i];
            for(int j=0 ; j<str.size() ; j++ )
            {
                    if(mp.find(str[j]) == mp.end())
                    {
                        flag=false;
                        break;
                    }
            }

            if(flag)
            {
                count++;
            }
        }
        return count;
    }
};