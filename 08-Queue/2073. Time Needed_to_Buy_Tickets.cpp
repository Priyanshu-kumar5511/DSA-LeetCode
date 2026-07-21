class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       queue<int>qu;

       for(int i=0;i<tickets.size() ;i++)
       {
        qu.push(i);
       }
       int time=0;

       while(tickets[k] !=0 )
       {
         tickets[qu.front()]--;
         if(tickets[qu.front()])
         {
            qu.push(qu.front());
         }
         qu.pop();
         time++;
       }
       return time;
    }
};