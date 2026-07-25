// class Solution {
// public:
//     int maxProduct(int n) {
//         int product = 1;
//         int maxy =INT_MIN;
//         while(n>0)
//         {
//             int rem =n%10;
//             product *= rem;
//             maxy =max(maxy,product);
//             n /= 10;
//         }
//         return maxy;
        
//     }
// };


class Solution {
public:
    int maxProduct(int n) {
        int product = 1;
        int maxy =0;
        vector<int>ans;

        while(n>0)
        {
            int rem =n%10;
            ans.push_back(rem);
            n /= 10;
        }

        sort(ans.begin(),ans.end());
        maxy = ans[ans.size()-1] * ans[ans.size()-2];
        return maxy;
        
    }
};