class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        
        // A1 SC:O(n*m), TC: O(n*m) Using extra matrix
        // A2 SC:O(n+m), TC: O(n*m) using separate row & col vectors
        // A3 SC:O(1), TC: O(n*m) 
        bool row=0,col=0; 
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==0)
                {
                    if(i==0)row=1;
                    if(j==0)col=1;
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
            }
        }
        for(int i=1;i<mat.size();i++)
        {
            for(int j=1;j<mat[i].size();j++)
            {
                if(mat[i][0]==0 || mat[0][j]==0)
                {
                    mat[i][j]=0;
                }
            }
        }
        if(row)
        {
            for(int j=0;j<mat[0].size();j++)
                mat[0][j]=0;
        }
        if(col)
        {
            for(int i=0;i<mat.size();i++)
                mat[i][0]=0;
        }
        
    }
};