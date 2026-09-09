class Solution {
public:
   
   void tocheck(int n, vector<string>&ans,int left,int right,string &temp)
   {
    if(n*2 == left+right)
    {  
        ans.push_back(temp);
        return;
    }

    if(left<n)
    {
      temp.push_back('(');
      tocheck(n,ans,left+1,right,temp);
      temp.pop_back();
    }

    if(right<left)
    {
        temp.push_back(')');
      tocheck(n,ans,left,right+1,temp);
      temp.pop_back();
    }

   }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp="";
        tocheck(n, ans, 0,0 , temp);
        return ans;

    }
};