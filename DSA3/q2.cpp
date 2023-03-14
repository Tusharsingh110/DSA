#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     int m = nums1.size();
     int n = nums2.size();
        int it1=0,it2=0;
            vector<int> v;
        while(it1<m or it2<n) {
            int x,y;
            x = ((it1<m)?nums1[it1]:INT_MAX);
            y = ((it2<n)?nums2[it2]:INT_MAX);
            v.push_back(min(x,y));
            if(x==y){ v.push_back(x); it1++; }
            (x<y)? it1++:it2++;
        }
        if(v.size()){
            if(v.size()&1)
            return (double)( v[v.size()/2]  );
            else{ return (double)( ( (double)v[v.size()/2] + (double)v[(v.size()/2) - 1]  )/(double)2  );  }
        }
        return (double)0;
    }
};