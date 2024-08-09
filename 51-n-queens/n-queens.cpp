class Solution {
public:
unordered_map<int,bool>row_chk;
unordered_map<int,bool>lowerD_chk;
unordered_map<int,bool>upperD_chk;

void storesol(vector<vector<string>> &ans,vector<vector<char>> &board,int n){
    //kyuki hme bahut saare board mil skte h ans m
    //to hum use pehle temp m store krwayenge
    vector<string> tempanswer;
    for(int i=0;i<n;i++){//row
        string output="";
        for(int j=0;j<n;j++){//col
            output.push_back(board[i][j]);
        }
        //string is ready
        tempanswer.push_back(output);
    }

    ans.push_back(tempanswer);

}

bool isSafe(int row, int col,vector<vector<char>> &board ){
    //chk row wise
    if(row_chk[row]==true)
    //nt safe
    return false;
    if(lowerD_chk[row+col]==true){
        //nt safe
        return false;
    }

    if(upperD_chk[row-col]==true){
        //nt safe
        return false;
    }

    return true;

}

void solve(int n,vector<vector<string>> &ans,vector<vector<char>> &board,int col){
    //bse case
    //out of bound chle jaye tb
    if(col>=n){
        //all queens are placed
        //store krna h board k arrangement ko ans m
        storesol(ans,board,n);
        return;
    }

    //1 case by me...others by recursion
    //lets see where to place queen as i m hving col index
    //how will I decide that ..by chking if its safe or nt
    for(int row=0;row<n;row++){
        //har row m queen ko place krkr dekhenge ki wo safe h ya nhi
        if(isSafe(row,col,board)){
            board[row][col]='Q';
            row_chk[row]=true;
            lowerD_chk[row+col] = true;
            upperD_chk[row-col] =true;
            //baaki recursion will handle
            solve(n,ans,board,col+1);
            //backtracking
            board[row][col]='.';
            row_chk[row] =    false;
            lowerD_chk[row+col] = false;
            upperD_chk[row-col] = false;
        }
    }

}

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        //board
        vector<vector<char>> board(n,vector<char>(n,'.'));
        //start placing queen with 0th col
        int col=0;
        solve(n,ans, board,col);
        return ans;
    }
};