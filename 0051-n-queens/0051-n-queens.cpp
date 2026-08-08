class Solution {
public:
bool issafe(vector<string>& board,int col,int row,int n){
    // horizontal check
for(int i=0;i<n;i++){
    if(board[row][i]=='Q')
    return false;
}
// vertical check
for(int i=0;i<n;i++){
    if(board[i][col]=='Q')
    return false;
}
// left diagonal check
for(int i=row,j=col;i>=0&&j>=0;i--,j--){
if(board[i][j]=='Q')
return false;
}
// right diagonal check
for(int i=row,j=col;i>=0&&j<n;i--,j++){
    if(board[i][j]=='Q')
    return false;
}
return true;
}
        
        
void nqueens(vector<string>& board,vector<vector<string>>& ans,int row,int n){

    if(row==n){
        ans.push_back(board);
        return;
    }
    for(int j=0;j<n;j++){
        if(issafe(board,j,row,n)){
        board[row][j]='Q';
        nqueens(board,ans,row+1,n);
        board[row][j]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        nqueens(board,ans,0,n);
        return ans;
    }
};