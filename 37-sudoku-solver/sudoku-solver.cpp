class Solution {
public:

bool isSafe(char digit,int row, int col, vector<vector<char>>& board){
    //row chk
    for(int k=0;k<9;k++){
        if(board[row][k]==digit){
            //nt safe duplicacy found
            return false;
        }
    }
    //col chk
    for(int k=0;k<9;k++){
        if(board[k][col]==digit){
            return false;
        }
    }
    //3*3 matrix chk
    for(int k=0;k<9;k++){
        if(board[(3*(row/3)+k/3)][3*(col/3)+k%3]== digit){
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<char>>& board){
    //base case

    //1 case hum solve krenge or baaki recisrion smbhaal lega
    //sbse pehle hum chk krenge ki kaha empty h jagah
    //kyuki hume wahi place krna h digit ko
    for(int i=0;i<board.size();i++){
        for (int j=0;j<board[0].size();j++){
            // m i,j wali cell pr aagyi
            //chk ki cell empty h ya nhi
            if(board[i][j]=='.'){
                //cell empty h
                //no fille krne h
                //1-9 tk k no loop k thru fill kiye jaa skte h
                //yha pr hum char place kr rhe h
                for(char digit='1';digit<='9';digit++){
                    //chk krna oga ki no jo m fil krna chah rhi hu wo safe h ya nhi
                    if(isSafe(digit,i,j,board)==true){
                        //agr digit rakhna safe h to uss digit ko rakh do
                        board[i][j]=digit;
                        //baaki recursion smbhaalega
                        bool aagesolvehogya = solve(board); 
                        if(aagesolvehogya ==true){
                            //mtlb ki hmne sahi digit k saath solve kia h
                            return true;
                        }

                        else{
                            //wo wala case h jaha hmne digit rakh di h or aage se ans false aagya h
                            //aage board solve nhi hopaya 
                            //backtracking
                            board[i][j]='.';
                        }
                    }
                }
                //out of loop agr hum yha pahuche 
                //iska mtlb ki 1-9 tk kuch place hi nhi hua h
                //hmne pehle kahi glti krdi hi
                return false;
            }

        }
    }
    //agr m yha aagyi hu iska mtlb mujhe kahi empty sapce nhi mila h
    //iska mtlb ans aachuka h
    return true;
}

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};