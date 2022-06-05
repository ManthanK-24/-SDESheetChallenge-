class Solution {
public:
    Solution(){
        //  ios_base::sync_with_stdio(NULL),cin.tie(NULL);
        // if comes during interview then explain with illustration
        // find first ar[i] < ar[i+1] from right
        // find first ar[j] > ar[i] from right
        // swap(ar[j],ar[i]);
        // reverse(ar.begin()+i+1, ar.end());
    }
    void nextPermutation(vector<int>& nums) {
        
        int i, j = -1;
        
        for(i= nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                break;
            }
        }
        if(i<0)reverse(nums.begin(),nums.end());
        else
        {
            for(j=nums.size()-1;j>=0;j--)
            {
                if(nums[j] > nums[i])
                {
                    break;
                }
            }
            swap(nums[i],nums[j]);
            
            reverse(nums.begin()+i+1,nums.end());
            
        }
        
    }
};