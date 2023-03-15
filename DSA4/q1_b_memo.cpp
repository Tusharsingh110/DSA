//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++
class Solution
{
    int dp[1010][1010];
    public:
    int ks(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(n==0 or W==0) return 0;
       if(dp[W][n-1] != -1) return dp[W][n-1];
       if(W>=wt[n-1]) {
           int pick = val[n-1]+ks(W-wt[n-1],wt,val,n-1);
           int notpick=ks(W,wt,val,n-1);
           return dp[W][n-1]= max(pick,notpick);
       }
       else {
           return dp[W][n-1]= ks(W,wt,val,n-1);
       }
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        memset(dp,-1,sizeof(dp));
       return ks(W,wt,val,n);
    }
};