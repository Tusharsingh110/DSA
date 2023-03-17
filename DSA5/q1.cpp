//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int n;
    //Function to find length of longest increasing subsequence.
    int f(int prev,int i,int v[],vector<vector<int>>&dp) {
        if(i>=n) return 0;
        int p = 0;
        if(dp[prev+1][i] != -1) return dp[prev+1][i];
        int np = f(prev,i+1,v,dp);
        if(prev == -1 or v[prev]<v[i]) p = 1+f(i,i+1,v,dp);
        return dp[prev+1][i] = max(p,np);
    }
    int longestSubsequence(int N, int a[])
    {
        n=N;
        vector<vector<int>> dp(n+2,vector<int>(n+2,-1));
        return f(-1,0,a,dp);
       // your code here
       
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends