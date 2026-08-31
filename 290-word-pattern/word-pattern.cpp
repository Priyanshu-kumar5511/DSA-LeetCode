class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;

        unordered_map<string, char> rev;

        int j = 0;
        string str = "";
        for (int i = 0; i <= s.size(); i++) {

            if ( i < s.size() &&  s[i] != ' ') {
                str += s[i];
            } else {

                if (j >= pattern.size()) {
                    return false;
                }

                    if (mp.find(pattern[j]) != mp.end()) {
                        if(mp[pattern[j]] != str) 
                        { 
                            return false;
                             }
                    } else {

                    if (rev.find(str) != rev.end()) {
                        return false;
                    }

                    mp[pattern[j]] = str;
                    rev[str] = pattern[j];
                }

                str = "";
                j++;
            }
                
            }
        


        return j == pattern.size();
    }
};