class Solution {
public:
    int maxSubArray(vector<int>& ar) {
        
        int sum =INT_MIN, tmp=0;
        
        for(int i=0;i<ar.size();i++)
        {
            tmp += ar[i];
            sum = max(sum,tmp);
            if(tmp<0)tmp=0;
            
            
        }
            
            return sum;
    }
};