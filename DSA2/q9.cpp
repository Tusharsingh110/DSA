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
        int x =f(s,t,m,n,dp);
        // for(auto &x:dp) {
        //     for(auto &y:x) {cout<<y<<"\t";}
        //     cout<<endl;
        // }
        int i=m,j=n;
        string str;
        while(i>0 and j>0) {
            if(s[i-1]==t[j-1]) {
                str += s[i-1];
                i--;j--;
            }
            else if(dp[i-1][j]<dp[i][j-1]) {
                j--;
            }
            else i--;
        }
        reverse(str.begin(),str.end());
        cout<<str<<endl;
        return x;
    }
};

int main() {
    Solution sol;
    string s,t;
    cin>>s>>t;
    cout<<sol.longestCommonSubsequence(s,t);
    return 0;
}