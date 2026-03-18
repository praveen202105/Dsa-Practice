1class Solution {
2public:
3    int countSubmatrices(vector<vector<int>>& grid, int k) {
4        int n=grid.size(),m=grid[0].size();
5        int ans=0;
6        for(int i=0;i<n;i++){
7            for(int j=0;j<m;j++){
8                if(i==0 && j){
9                    grid[i][j]+=grid[i][j-1];
10                }else if(j==0 && i){
11                    grid[i][j]+=grid[i-1][j];
12                }else if(i && j){
13                    grid[i][j]+=grid[i-1][j];
14                    grid[i][j]+=grid[i][j-1];
15                    grid[i][j]-=grid[i-1][j-1];
16                }
17                if(grid[i][j]<=k) ans+=1;
18            }
19        }
20       
21       return ans;
22
23    }
24};