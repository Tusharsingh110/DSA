#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
int dp[110][110];
    int mcm(int v[],int i,int j) {
        if(i>=j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int mini = INT_MAX;
        for(int k=i;k<j;k++) {
            int cur = mcm(v,i,k) + mcm(v,k+1,j) + v[i-1]*v[k]*v[j];
            mini = min(mini,cur);
        }
        return dp[i][j] = mini;
    }
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        return mcm(arr,1,N-1);
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}