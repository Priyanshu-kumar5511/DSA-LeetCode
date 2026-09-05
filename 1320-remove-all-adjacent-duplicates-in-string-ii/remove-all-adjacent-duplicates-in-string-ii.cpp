class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
      


        for(int i=0;i<s.size() ;i++)
        { 
           if(!st.empty() && st.top().first == s[i] )
           {
               st.top().second++;

               if(st.top().second==k)
               {
                st.pop();
               }

           }
           else
           {
              st.push({s[i] , 1});
           }
            
        }
       string str="";
       while(!st.empty())
       {
          int count = st.top().second;

          while(count--)
          {
            str += st.top().first;
          }

          st.pop();
       }

       reverse(str.begin() , str.end());

       return str;

    }
};