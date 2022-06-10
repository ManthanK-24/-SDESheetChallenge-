#include<bits/stdc++.h>
class Solution {
public:
    int merge(vector<int> &ar,int low,int mid,int high)
    {
        int total = 0;
        int j=mid+1;
        for(int i=low;i<=mid;i++)
        {
            while(j<=high && (long) ar[i] > (long) 2*ar[j] )
            {
                j++;
            }
            total += j-(mid+1);
        }
        int left = low, right = mid+1;
        vector<int> tmp;
        while(left<=mid && right<=high)
        {
            if(ar[left]<=ar[right])
            {
                tmp.push_back(ar[left++]);
            }
            else
                tmp.push_back(ar[right++]);
        }
        while(left<=mid)
        {
            tmp.push_back(ar[left++]);
        }
         while(right<=high)
        {
            tmp.push_back(ar[right++]);
        }
        for(int i=low;i<=high;i++)
            ar[i] = tmp[i-low];
        
        return total;
        
    }
    int mergesort(vector<int> &ar,int low,int high)
    {
        if(low>=high)return 0;
        int mid = (high+low)/2;
        int inv = mergesort(ar,low,mid);
        inv += mergesort(ar,mid+1,high);
        inv += merge(ar,low,mid,high);
        
        return inv;
    }
    int reversePairs(vector<int> &ar) {
        return mergesort(ar,0,ar.size()-1);
    }
};