#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int ed(int e,int f) {
        if(f==0 or e==1 or f==1) {
            return f;
        }
        int mini = INT_MAX;
        for(int k=1;k<=f;k++) {
            int temp_ans = max(ed(e-1,k-1),ed(e,f-k))+1;
            mini = min(temp_ans,mini);
        }
        return mini;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        return ed(n,k);
    }
};