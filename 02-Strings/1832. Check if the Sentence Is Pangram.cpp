class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mp;

        for(int i=0;i<sentence.size() ;i++)
        {
           
             mp[sentence[i]]++;
           
        }

        for(char AL='a' ; AL<='z' ;AL++)
        {
            if(mp[AL]<1)
            {
                return false;
            }
        }
        return true;
    }
};