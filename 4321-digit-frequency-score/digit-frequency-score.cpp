class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;

        while(n>0)
        {
            int rem= n%10;
            mp[rem]++;
            n /= 10;
        }

      int sum=0;
        for(auto& x : mp)
        {
            sum += x.first *x.second;
        }
        return sum;
    }
};