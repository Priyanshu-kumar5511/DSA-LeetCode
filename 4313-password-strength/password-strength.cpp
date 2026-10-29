class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char>st;
        int sum =0;

        for (char c : password) {
            st.insert(c);
        }



        for(char i:st)
        {
            if('a'<= i && i<= 'z' )
            {
                sum += 1;
            }
            else if( 'A'<= i && i<= 'Z'  )
            {
                sum +=2;
            }
            else if('0'<= i && i<= '9')
            {
                sum += 3;
            }
            else{
                sum += 5;
            }
        }

        return sum;
    }
};