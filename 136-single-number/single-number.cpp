class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int unique = 0;
        for(int i = 0;i<n;i++){
            unique= unique^nums[i]; // 0^xor any no = that no ; a^ 0 = a;
        }
        return unique;
    }
};