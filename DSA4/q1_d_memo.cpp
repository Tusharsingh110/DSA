//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence
class Solution
{
    int dp[1010][1010];
    public:
    //Function to find the length of longest common subsequence in two strings.
    int LCS(int m, int n, string s1, string s2) {
         if(m==0 or n==0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        if(s1[m-1]==s2[n-1]) return dp[m][n] = 1+LCS(m-1,n-1,s1,s2);
        else return dp[m][n] = max(LCS(m-1,n,s1,s2),LCS(m,n-1,s1,s2));
    }
    
    int lcs(int m, int n, string s1, string s2)
    {
        memset(dp,-1,sizeof(dp));
       return LCS(m,n,s1,s2);
        // your code here
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends