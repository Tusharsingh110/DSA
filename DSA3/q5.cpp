//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    int dp[205][205];
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int ed(int e,int f) {
        if(f==0 or e==1 or f==1) {
            return f;
        }
        if(dp[e][f] != -1)  return dp[e][f];
        int mini = INT_MAX;
        for(int k=1;k<=f;k++) {
            int temp_ans = max(ed(e-1,k-1),ed(e,f-k))+1;
            mini = min(temp_ans,mini);
        }
        return dp[e][f]=mini;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(dp,-1,sizeof(dp));
        return ed(n,k);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends