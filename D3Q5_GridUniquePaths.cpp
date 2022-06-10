class Solution {
public:
    /*int countpaths(int i, int j, int m, int n, vector<vector<int>> &dp)
    {
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j>=n) return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        
        return dp[i][j] = countpaths(i+1,j,m,n,dp) + countpaths(i,j+1,m,n,dp);
    } */
    int uniquePaths(int m, int n) {
        
        //vector<vector<int>> dp(m, vector<int> (n,-1));
         //return countpaths(0,0,m,n,dp);
        
        // First Brute Force Recursive, Second DP, Third Combinatorics
        
            int N = n + m - 2;// how much steps we need to do
            int k = m - 1; // number of steps that need to go down
            double res = 1;
            // here we calculate the total possible path number 
            // Combination(N, k) = N! / (k!(N - k)!)
            // reduce the numerator and denominator and get
            // C = ( (n - k + 1) * (n - k + 2) * ... * n ) / k!
            for (int i = 1; i <= k; i++)
                res = res * (N - k + i) / i;
            return (int)res;
        
        
        
    }
};