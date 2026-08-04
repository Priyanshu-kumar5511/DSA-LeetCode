class Solution {
public:
    int maxScore(string s) {
        int left = 0, right = 0 ;

        for(int i=0;i<s.size()  ;i++)
        {

            if(s[i]=='1')
            {
                right++;
            }
            // else{
            //     right++;
            // }
            

        }


        int maxy=INT_MIN;
        for(int i=0;i<s.size()-1 ;i++)
        {
             if(s[i]=='0')
             {
                left++;
             }
             else{
                right--;
             }
          
             

             int tol = left+right;
            //  int rev= tol - left;

             maxy =max(maxy,tol);
        }

        return maxy;
    }
};