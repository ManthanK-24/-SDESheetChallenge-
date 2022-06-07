class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++)
        {
            vector<int> v;
            if(i==0)
            {
                v = intervals[i];
                ans.push_back(v);
            }
            else
            {
                int n = ans.size();
                
                if(ans[n-1][1] >= intervals[i][0] )
                {
                    ans[n-1][1] = max(intervals[i][1],ans[n-1][1]);
                }
                else
                {
                    v = intervals[i];
                    ans.push_back(v);
                }
            }
            
            
        }
        return ans;
    }
};