class Solution {
public:
    vector<int> minOperations(string boxes) {

        int n = boxes.size();
        vector<int> ans(n, 0);

        int oneCount = 0;
        int oprationa = 0;

        for (int i = 0; i < boxes.size(); i++) {
            ans[i] += oprationa;

            if (boxes[i] == '1') {
                oneCount++;
            }

            oprationa += oneCount;
        }

        oneCount = 0;
        oprationa = 0;
        for (int i = boxes.size() - 1; i >= 0; i--) {
            ans[i] += oprationa;

            if (boxes[i] == '1') {
                oneCount++;
            }

            oprationa += oneCount;
        }

        return ans;
    }
};