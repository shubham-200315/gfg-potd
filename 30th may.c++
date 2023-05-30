c++



int m, n;
vector<vector<bool>> vis;
bool isSafe(int x, int y){
    return x>=0 && x<m &&  y>=0 && y<n;
}
bool dfs(int index, int x, int y, string target, vector<vector<char>>& board){
    if(index == target.length()-1 ){
        return true;
    }
    vis[x][y] = true;
    int dx[4] = { 1 , 0 , 0 , -1} ,dy[4] = {0, 1, -1, 0};
    bool f = false;
    for(int i = 0; i < 4; i++){
        int x_ = x + dx[i], y_ = y + dy[i];
        if(isSafe(x_, y_) && !vis[x_][y_] && board[x_][y_] == target[index + 1]){
            f = f or dfs(index + 1,x_, y_, target, board);
        }
    }
    return f;
}
bool isWordExist(vector<vector<char>>& board, string word) {
    // Code here
    m = board.size(), n = board[0].size();
    for(int i = 0 ; i < m; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == word[0]){
                vis.resize(m , vector<bool>(n, false));
                bool f = dfs(0, i, j, word, board);
                if(f) return true;
            }
        }
    }
    return false;
}


java 



class Solution
{
    public boolean isWordExist(char[][] board, String word)
    {
        // Code here
        int x = board.length;
        int y = board[0].length;
        boolean[][] visited = new boolean[x][y];
        for(int i = 0; i < x; i++){
            for(int j = 0; j < y; j++){
                if(helperDFS(board, word, 0, i, j, visited)) return true;
            }
        }
        
        return false;
    }
    
    boolean helperDFS(char[][] board, String word, int curr, int x, int y, boolean[][] visited) {
        if(x >= board.length || y >= board[0].length || x < 0 || y < 0) return false; 
        if(curr >= word.length() || board[x][y] != word.charAt(curr) || visited[x][y]) return false;
        if(curr == word.length()-1) return true;
        
        visited[x][y] = true;
        
        boolean a1 = helperDFS(board, word, curr+1, x+1, y, visited);
        boolean a2 = helperDFS(board, word, curr+1, x, y+1, visited);
        boolean a3 = helperDFS(board, word, curr+1, x-1, y, visited);
        boolean a4 = helperDFS(board, word, curr+1, x, y-1, visited);
        
        visited[x][y] = false;
        
        if(a1 || a2 || a3 || a4) return true;
        return false;
    }
}
