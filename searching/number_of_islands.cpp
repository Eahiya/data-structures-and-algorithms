# include <iostream>
# include <vector>

using namespace std;

class Solution{
    public:

    void dfs(vector<vector<char>> &grid, int r, int c){
        int rows = grid.size();
        int cols = grid[0].size();

        if(r< 0 || c<0 || r>rows || c>cols || grid[r][c] == '0'){
            return;
        }
        grid[r][c] = '0';

        dfs(grid, r+1, c);
        dfs(grid, r-1, c);
        dfs(grid, r, c+1);
        dfs(grid, r, c-1);
    }

    int numIslands(vector<vector<char>> &grid){

        if(grid.empty()){
            return 0;
        }

        int island_count = 0;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == '0'){
                    island_count++;
                    dfs(grid,i,j);
                }
            }
        }
        return island_count;
    }
};