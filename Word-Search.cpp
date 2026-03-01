1class Solution {
2public:
3   bool isvalid(int itr,int r,int c,string word,vector<vector<int>>&visited,vector<vector<char>>& board){
4      return r>=0 && c>=0 && r<visited.size() && c<visited[0].size() && visited[r][c]==0 && board[r][c]==word[itr]; 
5  }
6   bool findans(int itr,int r,int c,string word,vector<vector<int>>&visited,vector<vector<char>>& board){
7       if(itr==word.size()){
8           return true;
9       }
10         if (!isvalid(itr, r, c, word, visited, board))
11        return false;
12
13      vector<int> rdir = {1, 0, 0, -1};
14        vector<int> cdir = {0, -1, 1, 0};
15
16    visited[r][c] = 1;
17       
18       for(int i=0;i<4;i++){
19           int nr=r+rdir[i],nc=c+cdir[i];
20            if (findans(itr + 1, nr, nc, word, visited, board))
21            return true;
22       }      
23       
24    visited[r][c] = 0;
25       return false;
26       
27       
28   }
29   
30    bool exist(vector<vector<char>>& board, string word) {
31          int r=board.size()-1;
32        int c=board[0].size()-1;
33        vector<vector<int>>visited(r+1,vector<int>(c+1,0));
34        for (int i = 0; i <=r; i++) {
35            for (int j = 0; j <= c; j++) {
36                if (findans(0,i, j, word, visited,board))
37                    return true;
38            }
39        }
40        return false;
41    }
42};