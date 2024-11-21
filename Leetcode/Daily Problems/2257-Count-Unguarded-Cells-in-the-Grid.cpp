class Solution {
    const int UNGUARDED = 0;
    const int GUARDED = 1;
    const int GUARD = 2;
    const int WALL = 3;
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, UNGUARDED)); int cnt_guarded = 0, isGuarded;

        for(vector<int>& guard: guards) grid[guard[0]][guard[1]] = GUARD;

        for(vector<int>& wall: walls) grid[wall[0]][wall[1]] = WALL;


        for(int i = 0; i < m; i++) {
            isGuarded = false;
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == WALL) isGuarded = false;
                else if(grid[i][j] == GUARD) isGuarded = true;
                if(grid[i][j] != UNGUARDED) continue;
                grid[i][j] = isGuarded ? GUARDED : UNGUARDED;
                cnt_guarded += isGuarded;
            }

            isGuarded = false;
            for(int j = n-1; j >= 0; j--) {
                if(grid[i][j] == WALL) isGuarded = false;
                else if(grid[i][j] == GUARD) isGuarded = true;
                if(grid[i][j] != UNGUARDED) continue;
                grid[i][j] = isGuarded ? GUARDED : UNGUARDED;
                cnt_guarded += isGuarded;
            }
        }

        for(int j = 0; j < n; j++) {
            isGuarded = false;
            for(int i = 0; i < m; i++) {
                if(grid[i][j] == WALL) isGuarded = false;
                else if(grid[i][j] == GUARD) isGuarded = true;
                if(grid[i][j] != UNGUARDED) continue;
                grid[i][j] = isGuarded ? GUARDED : UNGUARDED;
                cnt_guarded += isGuarded;
            }

            isGuarded = false;
            for(int i = m-1; i >= 0; i--) {
                if(grid[i][j] == WALL) isGuarded = false;
                if(grid[i][j] == GUARD) isGuarded = true;
                if(grid[i][j] != UNGUARDED) continue;
                grid[i][j] = isGuarded ? GUARDED : UNGUARDED;
                cnt_guarded += isGuarded;
            }
        }

        return n * m - cnt_guarded - guards.size() - walls.size();
    }
};