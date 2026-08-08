class Solution {
public:
bool issafe(vector<vector<char>>& board,int row,int col,char dig){
    // horizontal 
for(int i=0;i<9;i++){
    if(board[row][i]==dig)
    return false;
}
// vertical
for(int i=0;i<9;i++){
    if(board[i][col]==dig)
    return false;
}
int sr=(row/3)*3;
int sc=(col/3)*3;
for(int i=sr;i<=sr+2;i++){
    for(int j=sc;j<=sc+2;j++){
        if(board[i][j]==dig)
        return false;
    }
}
return true;

}
bool ss(vector<vector<char>>& board,int row,int col){
    if(row==9)
    return true;

    int nextrow=row;
    int nextcol=col+1;
    if(nextcol==9){
        nextrow=row+1;
        nextcol=0;
    }
if(board[row][col]!='.')
{
   return ss(board,nextrow,nextcol);
}
   
    for(char i='1';i<='9';i++){
        if(issafe(board,row,col,i)){//
        board[row][col]=i;
        if(ss(board,nextrow,nextcol))
        return true;
       
            board[row][col]='.';
        }//
    }
     return false;
}
    void solveSudoku(vector<vector<char>>& board) {
        
        ss(board,0,0);
    }
};