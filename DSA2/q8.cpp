#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int f(string &s1,string &s2,int m,int n,vector<vector<int>> &dp) {
        if(m==0 or n==0) return 0;
        if(dp[m][n] != -1) return dp[m][n];
        if(s1[m-1]==s2[n-1]) { return dp[m][n]=1+f(s1,s2,m-1,n-1,dp); }
        else return dp[m][n]=max(f(s1,s2,m-1,n,dp),f(s1,s2,m,n-1,dp));
    }
    int longestCommonSubsequence(string s, string t) {
        int m = s.size(),n=t.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return f(s,t,m,n,dp);
    }
};

int main() {
    Solution sol;
    string s,t;
    cin>>s>>t;
    cout<<sol.longestCommonSubsequence(s,t);
    return 0;
}