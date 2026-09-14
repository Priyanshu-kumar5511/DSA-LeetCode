// class Solution {
// public:
//     int findComplement(int n) {
//         int count=0;
//         int store= n;
//         while(store>0)
//         {
//             count++;
//             store >>= 1;
//         }

//         int marks = (1 << count)-1;
//         return n^marks;
//     }
// };


class Solution {
public:
    int findComplement(int n) {
        int count = 0;
        int temp = n;

        while (temp > 0) {
            count++;
            temp >>= 1;
        }

        int marks = (1LL << count) - 1;

        return n ^ marks;
    }
};