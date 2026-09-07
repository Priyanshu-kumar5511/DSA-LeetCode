class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    priority_queue<pair<int,string>> pq;
     vector<string>str;
      for(int i=0;i<names.size() ;i++)
      {
         pq.push({heights[i],names[i]});
      }

      while(!pq.empty())
      {
        str.push_back(pq.top().second);
        pq.pop();
      }
         return str;
    }
};