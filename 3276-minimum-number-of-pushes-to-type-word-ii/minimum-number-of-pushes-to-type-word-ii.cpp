class Solution {
public:
    int minimumPushes(string word) {

       vector<int>feq(26,0);

        for (char ch : word) {
            feq[ch-'a']++;
        }

        sort(feq.begin(),feq.end(),greater<int>());
       
       int totalsize=0;
       for(int i=0;i<26;i++)
       {
         int push = i / 8 + 1;
    totalsize += feq[i] * push;
           
       }
       return totalsize;

    }
};

















// https://www.youtube.com/watch?v=fX6sHghLCow