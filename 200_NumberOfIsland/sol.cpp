//if want to consider disgonal slots, enable 1,3,6,8
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int re = 0;
        for (int i= 0; i<grid.size() ; i++){
            for (int j= 0; j< grid[i].size() ; j++){
                if (! marked(grid, i,j)){
                    mark(grid, i, j);
                    //cout<<"new island!"<<endl;
                    re ++;
                }
            }
        }
        return re;
    }
    
    void mark (vector<vector<char>>& grid, int i, int j){
        grid[i][j] = '2';
        //cout<<"just marked i: "<<i<<", j: "<<j<<endl;
        /*1
        if (i-1 >=0 && j-1 >=0){
            if (!marked (grid, i-1, j-1)){
                mark(grid, i-1, j-1);
            }
        }*/
        //2
        if (j-1 >=0){
            if (!marked (grid, i, j-1)){
                
                mark(grid, i, j-1);
            }
        }
        /*3
        if (i+1 < grid.size() && j-1 >=0){
            if (!marked (grid, i+1, j-1)){
                
                mark(grid, i+1, j-1);
            }
        }*/
        //4
        if (i-1 >=0){
            if (!marked (grid, i-1, j)){
                
                mark(grid, i-1, j);
            }
        }
        //5
        if (i+1 < grid.size()){
            if (!marked (grid, i+1, j)){
                
                mark(grid, i+1, j);
            }
        }
        /*6
        if (i-1 >=0 && j+1 <grid[i].size()){
            if (!marked (grid, i-1, j+1)){
                
                mark(grid, i-1, j+1);
            }
        }*/
        //7
        if (j+1 <grid[i].size()){
            if (!marked (grid, i, j+1)){
                
                mark(grid, i, j+1);
            }
        }
        /*8
        if (i+1 < grid.size() && j+1 <grid[i].size()){
            if (!marked (grid, i+1, j+1)){
                
                mark(grid, i+1, j+1);
            }
        }*/
    }
    
    bool marked (vector<vector<char>>& grid, int i, int j){
        if (grid[i][j]== '1'){
            return false;
        }
        return true;
    }
};
