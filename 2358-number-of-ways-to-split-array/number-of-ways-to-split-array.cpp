// class Solution {
// public:
//     int waysToSplitArray(vector<int>& nums) {
//         int st =0, end=0 ,count=0;
//         long long stsum = 0;
// long long endsum = 0;
//         while(st<nums.size()-1)
//         {
//             end = st+1;
//             stsum += nums[st];
//             while(end<nums.size())
//             {
//                 endsum += nums[end];
//                 end++;
//             }

//             if(stsum >=endsum)
//             {
//                 count++;
//             }

//             st++;
//             end=st;
//             endsum=0;

//         }
//         return count;
//     }                         // LOgic correct hain bs o(n2)ho raha hain
// };

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {

        long long sum = 0;
        for (int x : nums) {
            sum +=x;
        }
        int count =0;
       long long left=0;
        for(int i=0;i<nums.size()-1 ;i++)
        {
            left += nums[i];
            sum -= nums[i];
            if(left>=sum)
            {
                count++;
            }
        }
        return  count;
    }
};