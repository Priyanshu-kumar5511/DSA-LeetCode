// class Solution {
// public:
//     int longestNiceSubarray(vector<int>& nums) {
//        int st=0,end=0,count=0;
//        int mark=0;
//        int maxy=1;
//        while(st < nums.size() )
//        { 
//         end =st+1;
//          while(  (end != nums.size()) && (( nums[st] & nums[end]) ==0 )  )
//          {
//             int len = end-st+1;
//             maxy = max(maxy,len);
//             end++;
           
//          }
//          st=end;
//        }


//         return maxy;       
//     }
// };





// test case [744437702,379056602,145555074,392756761,560864007,934981918,113312475,1090,16384,33,217313281,117883195,978927664]  nhi chl raha hain logic prooblem .. 42/66









class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {

        int st = 0, mask = 0;
     int maxy = 1;

        for (int end = 0; end < nums.size(); end++) {

            while ((mask & nums[end]) != 0) {
                mask ^= nums[st];
                st++;
            }

            mask |= nums[end];

            maxy = max(maxy, end - st + 1);
        }

        return maxy;
    }
};