class Solution {
public:
    int reverseDegree(string s) {

        int sum=0;
        for(int i=0;i<s.size() ;i++)
        {
          int c= s[i]-'a';
          int d = 26-c;
          sum += d*(i+1);

        }
        return sum;
    }
};




// class Solution {
// public:
//     int reverseDegree(string s) {

//         int sum = 0;
//         unordered_map<char, int> mp;

//         for (char c = 'a'; c <= 'z'; c++) {
//             mp[c] = 'z' - c + 1;
//         }

//         for(int i=0 ;i<s.size() ;i++)
//         {
//             if(mp.find(s[i]) != mp.end())
//             {
//                 int c= mp[s[i]] *(i+1);
//                 sum += c;
//             }
//         }
//         return sum;
//     }
// };