1class Solution {
2public:
3   int findans(int i,int j,int remaining,vector<vector<int>>& board){
4
5    if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] == -1 || board[i][j]==3) return 0;
6
7    if (board[i][j]==2)
8            {
9                return (remaining == 0) ? 1 : 0;
10            }
11  int org=board[i][j];
12    board[i][j] = 3;
13       
14       int found = (findans(i + 1, j, remaining-1,board) + findans(i-1, j,remaining-1,board) + findans(i, j + 1,remaining-1, board) + findans(i , j-1,remaining-1,board));
15
16       
17    board[i][j] = org;
18       return found;
19       
20       
21   }
22   
23
24    int uniquePathsIII(vector<vector<int>>& board) {
25           int r=board.size();
26        int c=board[0].size();
27         int start_i = -1, start_j = -1;
28        int emptyCount = 0;
29        
30        for (int i = 0; i <r; i++) {
31            for (int j = 0; j < c; j++) {
32               if (board[i][j] == 1) {
33                    start_i = i;
34                    start_j = j;
35                } else if (board[i][j] == 0) {
36                    emptyCount++;
37                }
38
39            }
40        }
41        return findans(start_i, start_j, emptyCount + 1, board);;
42    }
43};