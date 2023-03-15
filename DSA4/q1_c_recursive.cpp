//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int mcm(int v[],int i,int j) {
        if(i>=j) return 0;
        int mini = INT_MAX;
        for(int k=i;k<j;k++) {
            int cur = mcm(v,i,k) + mcm(v,k+1,j) + v[i-1]*v[k]*v[j];
            mini = min(mini,cur);
        }
        return mini;
    }
    int matrixMultiplication(int N, int arr[])
    {
        return mcm(arr,1,N-1);
        // code here
    }
};


//{ Driver Code Starts.

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
// } Driver Code Ends