class Solution {
public:
    int help(int i,int j,int n,int m,vector<vector<int>>& grid){
        if(i>=n || j>=m || i<0 || j<0)return 1;
        if(grid[i][j]==0)return 1;
        return 0;
    }
    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};
    int calP(int i,int j,int n,int m,vector<vector<int>>& grid){
        int ans=0;
        for(int k=0;k<4;k++){
            ans+=help(i+dx[k],j+dy[k],n,m,grid);
        }
        return ans;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    ans+=calP(i,j,n,m,grid);
                }
            }
        }
        return ans;
    }
};