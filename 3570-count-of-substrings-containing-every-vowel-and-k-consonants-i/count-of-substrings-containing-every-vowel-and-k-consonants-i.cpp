// class Solution {
// public:
//     int countOfSubstrings(string word, int k) {
//         unordered_map<char, int> mp;
//         int count = 0;
//         int st = 0;
//         int c = 0;
//         for (int i = 0; i < word.size(); i++) {
//            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
//             {
//                 mp[word[i]]++;
//             }
//             else
//             {
//                 c++;
//             }

//             while (mp['a'] > 0 && mp['e'] > 0 && mp['i'] > 0 && mp['o'] > 0 && mp['u'] > 0 && c == k) {
                
//                   count++;
//                 if (word[st] != 'a' && word[st] != 'e' && word[st] != 'i' &&
//                     word[st] != 'o' && word[st] != 'u') {
//                     c--;
               
//                 }
//                 mp[word[st]]--;
              
//               st++;
                
//             }
//         }

//         return count;
//     }
// };




class Solution {
public:

     bool isvalid(char c)
     { 
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' ||c == 'u'; 
     }

    int check(string word , int k)
    {
        unordered_map<char, int> mp;
       long long count=0;
        int st=0,c=0;
        for (int i = 0; i < word.size(); i++) {
           
            if (isvalid( word[i] )) {
                 mp[word[i]]++;
            }
            else{
                c++;
            }

            while (mp['a'] > 0 && mp['e'] > 0 && mp['i'] > 0 && mp['o'] > 0 && mp['u'] > 0 && c >= k) {
                
                  count += word.size() -i ;
                if ( isvalid(word[st]) ) {
                    // c--;
                    mp[word[st]]--;
                     
                }
                else{
                    c--;
                }
    
              st++;
                
            }
        }

        return count;
        
    }

    long long countOfSubstrings(string word, int k) {
      return check(word,k ) -check(word,k+1 );  
    }
};