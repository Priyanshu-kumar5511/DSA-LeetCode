// #include<iostream>
#include <bits/stdc++.h>
using namespace std;

  int netreturn(  queue<int>q)
    { 
        while(!q.empty())
        {
          if(q.front()<0)
          {
            return q.front();
          }
          q.pop();
        }

        return 0;

    }

int main()
{

    vector<int>nums={2,-3,-4,-2,7,8,9,10};
    int k=3;
    queue<int>q;

  

    for(int i=0;i<k-1;i++)
    {
        q.push(nums[i]);

    }

    vector<int>ans;
    for(int i=k-1;nums.size();i++)
    {
        q.push(nums[i]);
        ans.push_back(netreturn(q));
        q.pop();
    }


    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }


}