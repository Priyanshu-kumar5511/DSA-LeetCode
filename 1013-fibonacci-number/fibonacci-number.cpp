// class Solution {
// public:
//     int fib(int n) {
//         int a = 0, b = 1, sum;
//         for (int i = 0; i < n; i++) {
//             // b = a + b;
//             // swap(a, b);
//             sum = a+b;
//             a=b ;
//             b= sum;
//         }
//         return a;
//     }
// };



// class Solution {
// public:
//     int fib(int n) {
//        if(n<=1)
//        {
//         return n;
//        }
       
//         return  fib(n-1)+fib(n-2);
//     }
// };











  ////////               solving using DP 

class Solution {
public:
  
  int solve(int n, vector<int>&dp)
  {
    if(n<=1)
     {
        return n;
     }

     if(dp[n] != -1)
     {
        return dp[n];
     }

    return dp[n]=solve(n-1,dp) + solve(n-2,dp); 

  }


    int fib(int n) {
     vector<int>dp(n+1,-1);
     return solve(n,dp);

    }
};














