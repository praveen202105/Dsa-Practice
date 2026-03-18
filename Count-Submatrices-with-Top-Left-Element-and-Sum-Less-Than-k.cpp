1class Solution {
2public:
3    int countSubmatrices(vector<vector<int>>& grid, int k) {
4        int n=grid.size(),m=grid[0].size();
5        int ans=0;
6        for(int i=0;i<n;i++){
7            for(int j=0;j<m;j++){
8                if(j) grid[i][j]+=grid[i][j-1];
9                if(i)grid[i][j]+=grid[i-1][j];
10                if(i && j)grid[i][j]-=grid[i-1][j-1];
11                if(grid[i][j]<=k) ans+=1;
12            }
13        }
14       
15       return ans;
16
17    }
18};