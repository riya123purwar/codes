class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n= nums.size();
        // long long result=0;
        // vector<int>leftmaxi(n);
        // vector<int>rytmaxk(n);
        // for(int j=1;j<n;j++){
        //     leftmaxi[j]= max(nums[j-1], leftmaxi[j-1]);
        // }
        // for(int j=n-2;j>=0;j--){
        //     rytmaxk[j]= max(nums[j+1], rytmaxk[j+1]);
        // }
        // for(int j=1;j<n;j++){
        //     result= max(result, (long long)(leftmaxi[j]-nums[j])* rytmaxk[j]);
        // }
        // return result;
        long long result=0;
        long long max_diff=0;
        long long max_i=0;
        for(int k=0;k<n;k++){
            result= max(result, (max_diff * nums[k]));
            max_diff= max(max_diff,(max_i- nums[k]));
            max_i= max(max_i,(long long)(nums[k]));
        }
        return result;
    }
    
};