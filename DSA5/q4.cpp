//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
  int m;
  long long f(int n, int x,vector<vector<long long>> &dp) {
      if (n==0) {
          if(x<=0) return 1;
          else return 0;
      }
      else {
          if(x<0) return 0;
      }
        if(dp[n][x] != -1) return dp[n][x];
        // cout<<n<<":"<<x<<endl;
        long long tots = 0;
        for(int i=1;i<=m;i++) {
            if(x>=i) {
                long long temp = f(n-1,x-i,dp); 
                tots += temp; 
            }
        } 
        return dp[n][x] = tots;
  } 
    long long noOfWays(int M , int N , int X) {
        // code here
        m=M;
        vector<vector<long long>> dp(N+2,vector<long long>(X+2,-1));
        return f(N,X,dp);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}
// } Driver Code Ends