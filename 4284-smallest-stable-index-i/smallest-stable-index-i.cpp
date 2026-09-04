class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

       int miny=0;
       int maxy=0;
        for(int i=0 ;i<nums.size() ;i++)
        {
            maxy = max(maxy , nums[i]);
            miny = *min_element(nums.begin()+i,nums.end());
           int c =maxy-miny ;
            // arr.push_back(c);
            if(c<=k)
            {
                return i;
            }

        }


   
        return -1;

    }
};