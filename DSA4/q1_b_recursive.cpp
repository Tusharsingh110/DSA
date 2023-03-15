//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(n==0 or W==0) return 0;
       
       if(W>=wt[n]) {
           int pick = val[n]+knapSack(W-wt[n],wt,val,n-1);
           int notpick=knapSack(W,wt,val,n-1);
           return max(pick,notpick);
       }
       else if(W<wt[n]) {
           return knapSack(W,wt,val,n-1);
       }
    }
};