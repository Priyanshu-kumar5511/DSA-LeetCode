class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int count =0;
        int maxy=INT_MIN;
        for(int i=0;i<s.size() ;i++)
        {    count=1;
            for(int j=0;j<s[i].size();j++)
            {
               if(s[i][j]==' ')
               {
                count++;
               }
            }
            maxy=max(maxy,count);
            
        }
        return maxy;
    }
};