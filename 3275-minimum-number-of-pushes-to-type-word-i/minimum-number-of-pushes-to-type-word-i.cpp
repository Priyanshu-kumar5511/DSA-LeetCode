class Solution {
public:
    int minimumPushes(string word) {
     unordered_map<int,int>mp;

int sum=0;
int start=2;
     for(int x:word)
     {
        if(start>9)
        {
            start=2;
        }

        mp[start]++;
        sum += mp[start];
        start++;
     }

     return sum;

    }
};