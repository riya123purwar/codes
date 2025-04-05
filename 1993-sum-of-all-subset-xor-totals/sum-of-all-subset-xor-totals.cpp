class Solution {
public:

int solve(vector<int>& nums, int i,int Xor){
    if(i==nums.size()){
        return Xor;
    }
    int inc= solve(nums, i+1,nums[i]^Xor);
    int ex= solve(nums,i+1,Xor);

    return inc+ex;
}

    int subsetXORSum(vector<int>& nums) {
        return solve(nums,0,0);
    }
};