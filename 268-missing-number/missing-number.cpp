class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;int n=nums.size();
        int f=1;
        sum = n*(1+n)/2;
        // return n;
        int s=0;
        for(int i=0;i<n;i++){
            // int s=0;
             s += nums[i];
             
        }
        return (sum-s);
    }
};