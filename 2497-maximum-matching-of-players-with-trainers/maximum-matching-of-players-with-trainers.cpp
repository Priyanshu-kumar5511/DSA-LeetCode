class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& pl, vector<int>& tr) {
        sort(pl.begin(), pl.end());
        sort(tr.begin(), tr.end());

        int count = 0;
        int i=0;
        int j=0;
        while(i<pl.size() && j<tr.size())
        {
            if(pl[i]<=tr[j])
            {
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }

        }

        return count;
    }
};