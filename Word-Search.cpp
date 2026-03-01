1class Solution {
2public:
3  
4   bool findans(int i,int j,int c,string word,vector<vector<char>>& board){
5    if (c == word.size())
6            {
7                return true;
8            }
9    if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[c]) return false;
10
11  char org=board[i][j];
12    board[i][j] = '#';
13       
14       bool found = (findans(i + 1, j, c + 1, word, board) || findans(i-1, j, c + 1, word,board) || findans(i, j + 1, c + 1, word,board) || findans(i , j-1, c + 1, word,board));
15
16       
17    board[i][j] = org;
18       return found;
19       
20       
21   }
22   
23    bool exist(vector<vector<char>>& board, string word) {
24          int r=board.size();
25        int c=board[0].size();
26        // vector<vector<int>>visited(r+1,vector<int>(c+1,0));
27        for (int i = 0; i <r; i++) {
28            for (int j = 0; j < c; j++) {
29                if (board[i][j] == word[0] && findans(i, j,0, word,board))
30                    return true;
31            }
32        }
33        return false;
34    }
35};