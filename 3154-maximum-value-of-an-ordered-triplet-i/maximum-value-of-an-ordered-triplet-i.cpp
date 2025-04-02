class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n= nums.size();
        long long result=0;
        vector<int>leftmaxi(n);
        vector<int>rytmaxk(n);
        for(int j=1;j<n;j++){
            leftmaxi[j]= max(nums[j-1], leftmaxi[j-1]);
        }
        for(int j=n-2;j>=0;j--){
            rytmaxk[j]= max(nums[j+1], rytmaxk[j+1]);
        }
        for(int j=1;j<n;j++){
            result= max(result, (long long)(leftmaxi[j]-nums[j])* rytmaxk[j]);
        }
        return result;
    }
};