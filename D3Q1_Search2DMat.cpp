class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int r1=0, c1=0, r2= mat.size()-1, c2= mat[0].size()-1;
        bool flg=0;
        while(r1<=r2)
        {
            if(mat[r1][c1]<=tar && tar<=mat[r1][c2])
            {
                 for(int j=c1;j<=c2;j++)
                 {
                     if(mat[r1][j]==tar)
                     {
                         flg=1;
                         break;
                     }
                 }
                break;
            }
            else if(mat[r2][c1]<=tar && tar<=mat[r2][c2])
            {
                 for(int j=c1;j<=c2;j++)
                 {
                     if(mat[r2][j]==tar)
                     {
                         flg=1;
                         break;
                     }
                 }
                break;
                
            }
            else
            {
                r1++;
                r2--;
            }
            
        }
        return flg;
    }
};