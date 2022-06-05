class Solution {
public:
    Solution(){
     ios_base::sync_with_stdio(NULL),cin.tie(NULL);
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        
        for(int i=1;i<=n;i++)
        {  vector<int> v;
            for(int j=1;j<=i;j++)
            {
                if(j==1 || j==i)
                {
                    v.push_back(1);
                }
                else
                {
                    vector<int> tmp = ans[ans.size()-1];
                    v.push_back(tmp[j-2]+tmp[j-1]);
                }  
                
            }
         ans.push_back(v);
       //  cout<<i<<"I "<<ans.size()<<"S\n";
         
         
        }
        return ans;
    }
};