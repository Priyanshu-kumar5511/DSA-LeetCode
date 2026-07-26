// class Solution {
// public:
//     int uniqueXorTriplets(vector<int>& nums) {
//         int n=nums.size();
//         unordered_map<int,int>mp;

//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 for(int k=0;k<n ;k++)
//                 {
//                     int r = nums[i] ^ nums[j] ^ nums[k];
//                     mp[r]++;                    

//                 }
//             }
//         }

//         return mp.size();  /// TLE aa raha hain o(n3);
//     }
// };





class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>us;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                
                    us.insert( nums[i] ^ nums[j] );
            }
        }

unordered_set<int> ans;
        for(auto x:us)
        {
            for(int y:nums)
            {
                ans.insert(x^y);
            }

        }

        return ans.size();
    }
};

