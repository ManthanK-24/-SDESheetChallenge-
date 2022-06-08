class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     
        if(m+n==0 || n==0)return;
        
        if(m==0)
        {
            for(int i=0;i<n;i++)
            {
                nums1[i] = nums2[i];
            }
        }
        else
        {
            int i=0,j=0,len=0;
            vector<int> ans;
            
            
            while(ans.size()<m+n)
            {
                if(i<m && j<n)
                {
                    if(nums1[i]<=nums2[j])
                    {
                        ans.push_back(nums1[i]);
                        i++;
                    }
                    else
                    {
                        ans.push_back(nums2[j]);
                        j++;
                    }
                    
                }
                else if(i<m)
                {
                    ans.push_back(nums1[i]);
                    i++;
                    
                }
                else if(j<n)
                {
                    ans.push_back(nums2[j]);
                    j++;
                }
                    
              
            }
           
        
            for(int i=0;i<ans.size();i++)
            {
                nums1[i]=ans[i];
            }
            
        }
        
        
    }
};