class Solution {
  public:
  bool isvalid(int r,int c,vector<vector<int>>&visited,vector<vector<int>>& maze){
      return r>=0 && c>=0 && r<visited.size() && c<visited[0].size() && visited[r][c]==0 && maze[r][c]==1; 
  }
   void findans(int r,int c,string temp,vector<string>&ans,vector<vector<int>>&visited,vector<vector<int>>& maze){
       if(r==maze.size()-1 && c==maze[0].size()-1){
           ans.push_back(temp);
           return;
       }
    //   if(r<0 || c<0 || r>=maze.size() || c>=maze[0].size() || visited[r][c]==1) return;
      vector<int> rdir = {1, 0, 0, -1};
vector<int> cdir = {0, -1, 1, 0};
vector<char> dir = {'D', 'L', 'R', 'U'};
       
       for(int i=0;i<4;i++){
           int nr=r+rdir[i],nc=c+cdir[i];
           if(isvalid(nr,nc,visited,maze)){
             visited[nr][nc]=1;
             temp.push_back(dir[i]);
               findans(nr,nc,temp,ans,visited,maze);
               visited[nr][nc]=0;
               temp.pop_back();
              }
       }      
       
       
       
       
   }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int r=maze.size()-1;
        int c=maze[0].size()-1;
          vector<string>ans;
        vector<vector<int>>visited(r+1,vector<int>(c+1,0));
      
        if(maze[r][c]==0) return ans;
        string temp;
        visited[0][0] = 1;
        findans(0,0,temp,ans,visited,maze);
        return ans;
        
    }
};