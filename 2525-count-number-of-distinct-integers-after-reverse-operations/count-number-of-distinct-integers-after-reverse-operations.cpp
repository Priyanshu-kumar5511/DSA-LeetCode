class Solution {
public:
     int reverseNumber(int n)
     {
        int rev=0;

        while(n!=0)
        {
            int rem = n%10;
            rev = rev *10 +rem;
            n /= 10;
        }

        return rev;
     }
      
    int countDistinctIntegers(vector<int>& nums) {
        // vector<int>ans=nums;
        int n= nums.size();
        // nums.resize(2 * n);
        for(int i=0 ;i<n ;i++)
        {
               nums.push_back(reverseNumber(nums[i])); 
        }

    set<int>st;
    for(int i=0 ;i<nums.size() ;i++)
    {
        st.insert(nums[i]);
    }
       

      return st.size();  
    }
};