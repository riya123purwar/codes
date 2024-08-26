class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int r= matrix.size();
       int c= matrix[0].size();
       int n= r*c;
       int s=0;
       int e= n-1;
       int mid= s+(e-s)/2;
       while(s<=e){
        //mid ka use krkr 2d arr ka row index or col index find krenge
        int rowin= mid/c;
        int colin = mid%c;

        if(matrix[rowin][colin]== target){
            return true;
        }
        else if(matrix[rowin][colin] < target){
            s= mid+1;
        }
        else{
            e= mid-1;
        }
        mid= s+(e-s)/2;
       } 
       return false;
    }
};