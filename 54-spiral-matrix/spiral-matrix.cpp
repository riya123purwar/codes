class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m= matrix.size();
        int n = matrix[0].size();
        //chk kaise krwayenge ki hume kaha rukna h 
        //jb hmare elemnts complt ho jayenge
        //cal krenge no of elemnts
        int total_ele= m*n;

        //printing k liye 
        int start_row= 0;
        int end_col= n-1;
        int end_row= m-1;
        int start_col= 0;

        int count=0;
        while(count<total_ele){
            //print startin row:
            for(int i = start_col;i<=end_col && count<total_ele;i++){
                ans.push_back(matrix[start_row][i]);
                count++;
            }

            start_row++;
            //print endin col:
            for(int i=start_row;i<= end_row && count<total_ele;i++){
                ans.push_back(matrix[i][end_col]);
                count++;
            } 
            end_col--;
            //print end_row:
            for(int i=end_col; i>= start_col && count<total_ele;i--){
                ans.push_back(matrix[end_row][i]);
                count++;
            }
            end_row--;
            //print startin_col:
            for(int i=end_row;i>=start_row && count<total_ele;i--){
                ans.push_back(matrix[i][start_col]);
                count++;
            }
            start_col++;
        }
        return ans;
    }
};