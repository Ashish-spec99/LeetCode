class Solution {
public:
    vector<string> createGrid(int m, int n) {
        
        vector<string> grid;
        for(int i=0; i<m; i++){
            string row = "";
            for(int j=0; j<n; j++){
                row += '#';                
            }
            grid.push_back(row);
            
        }
        grid[0] = string(n, '.');
        for(int i = 1; i < m; i++) {
              grid[i][n-1] = '.'; 
        }
        return grid;
    }
};