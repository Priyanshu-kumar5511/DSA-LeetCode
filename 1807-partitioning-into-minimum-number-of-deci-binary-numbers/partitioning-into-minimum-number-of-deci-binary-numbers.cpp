class Solution {
public:
    int minPartitions(string str) {
      int  maxy =0 ;
       for(int i=0;i<str.size() ;i++)
       {
          int rem = str[i] - '0';
          maxy = max(rem ,maxy);
      
if (maxy == 9) return 9; 
       }
       return  maxy;
    }
};