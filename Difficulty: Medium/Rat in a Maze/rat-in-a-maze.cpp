class Solution {
  public:
  
    void helper(vector<vector<int>>& mat,int r,int c,string path,vector<string> &ans, vector<vector<bool>> &vis){
        int n = mat.size();
        if(r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c] == true){
            return;
        }
        
        if(r == n-1 && c == n-1){
            ans.push_back(path);
            return;
        }
        vis[r][c] = true;
        
        helper(mat,r + 1, c, path+"D",ans,vis);//down
        helper(mat,r, c - 1, path+"L",ans,vis);//left
        helper(mat,r, c + 1, path+"R",ans,vis);//right
        helper(mat,r - 1, c, path+"U",ans,vis);//up
        
        
        vis[r][c] = false;
        
    }
    
    vector<string> ratInMaze(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        vector<vector<bool>> vis(n,vector<bool>(n,false));
        vector<string> ans;
        string path ="";
        helper(mat,0,0,path,ans,vis);
        return ans;
    }
};