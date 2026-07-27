// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         int end = 0, st = 0, maxy = INT_MIN;
//         vector<int> ans;
//         int count=0;

//         while (end < nums.size()) {
//             count++;
//             maxy = max(maxy, nums[end]);
//             if (count == k) {
//                 ans.push_back(maxy);
//                  end = st;
//                 st++;
               
//                 count = 0;
//                 maxy = INT_MIN;
//             }
//             end++;
//         }
//         return ans;   
//         ////  ///Time Limit Exceeded  38 / 53 testcases passed  
//         // y DPPPPPPP s hoga bhai bakin code theek hain
//     }
// };













class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int end = 0, st = 0, maxy = INT_MIN;
        vector<int> ans;
        priority_queue<pair<int,int>>pq;

        while (end < nums.size()) {
            
           pq.push({nums[end] , end});
            if (end>= k-1) {
               while(!pq.empty() && pq.top().second <= end-k )
               {
                 pq.pop();
               }
               ans.push_back(pq.top().first);
            }
               
            end++;
        }
        return ans;   
       
    }
};