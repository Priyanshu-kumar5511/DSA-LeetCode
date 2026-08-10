class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int miny = nums[0];
        int maxy = nums[0];
        int indexmin = 0;
        int indexmax = 0 ;

        int n =nums.size();
        for (int i = 0; i < nums.size(); i++) {
            //   miny = min(miny,nums[i]);
            if (miny > nums[i]) {
                indexmin = i;
                miny = nums[i];
            }

            if (maxy < nums[i]) {
                indexmax = i;
                maxy = nums[i];
            }
            //   maxy =max(maxy,nums[i]);
        }
    int a = max(indexmin, indexmax) + 1;
        int b = n - min(indexmin, indexmax);
        int c = min(indexmin, indexmax) + 1 + n - max(indexmin, indexmax);

        return min({a, b, c});
    
    }
};