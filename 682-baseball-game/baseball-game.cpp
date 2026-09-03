class Solution {
public:
    bool checkchar(string s) { return s == "C" || s == "D" || s == "+"; }

    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (string i : operations) {
            if (checkchar(i)) {

                if (i == "+") {
                    int a = st.top();
                    st.pop();

                    int b = st.top();
                    st.pop();

                    st.push(b);
                    st.push(a);
                    st.push(a + b);
                } else if (i == "D") {
                    st.push(2 * st.top());
                } else if (i == "C") {
                    st.pop();
                }

            }

            else {
                st.push(stoi(i));
            }
        }
        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};