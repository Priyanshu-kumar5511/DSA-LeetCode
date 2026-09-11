class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        unordered_set<int>st;

        for(int i=0 ; i<digits.size() ;i++)
        {
            for(int j=0 ; j<digits.size() ; j++)
            {
                for(int k=0; k<digits.size() ;k++)
                {
                    if(i==j || i==k || j==k)
                    {
                        continue;
                    }

                    int nums = (digits[i]*100 + digits[j]*10 +digits[k]*1 );

                    if(nums>=100 && nums%2==0)
                    {
                       st.insert(nums);
                    }
                }
            }
        }


        vector<int>ans(begin(st),end(st));
        sort(ans.begin() ,ans.end());
        return ans.size();
    }
};