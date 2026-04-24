class Solution {
public:

    bool dfs(vector<vector<char>>& board,int r, int c, string& word, int index){
        if(index == word.size()){
            return true;
        }
        int rows = board.size();
        int cols = board[0].size();
        if(r<0 || c<0 || r>= rows || c>= cols || board[r][c] != word[index]){
            return false;
        }
       
        //mark as visited
        char ch = board[r][c];
        board[r][c] = '#';
        //dfs calls
        
        bool found = dfs( board, r - 1,  c,  word,  index + 1) ||
                     dfs( board, r,  c + 1,  word,  index + 1) || 
                     dfs( board, r + 1,  c,  word,  index + 1) || 
                     dfs( board, r,  c -1,  word,  index + 1) ;
            
        
        
        board[r][c] = ch;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int r = 0;r<m;r++){
            for(int c= 0;c<n;c++){
                if(word[0] == board[r][c]){
                    if(dfs(board,r,c,word,0))
                        return true;
                    
                }
            }
        }
        return false;
    }
    
};