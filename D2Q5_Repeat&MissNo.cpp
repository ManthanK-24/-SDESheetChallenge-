#include<bits/stdc++.h>

vector<int> Solution::repeatedNumber(const vector<int> &A) {
   int n = A.size();
    long long sum=0,sumsqr=0;
    //int x=0;
    for(int i=0;i<n;i++)
    {
        sum += A[i];
        sum -= (i+1);
        sumsqr += ((long long)A[i]*(long long)A[i]);
        sumsqr -= ((long long)(i+1)*(long long)(i+1));
      //  x = x^A[i]^(i+1);
    }
   // cout<<x<<" X ";
    // sum = a - b;
    // sumsqr = (a+b)*(a-b);
    // sumsqr/sum = a+b;
    sumsqr /= sum;
   
   int r = (sumsqr + sum)/2;
    int m = (sumsqr - sum)/2;
    vector<int> ans;
    ans.push_back(r);
    ans.push_back(m);
    return ans;
}