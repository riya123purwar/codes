class Solution {
public:

    int bruteforce(vector<int>& nums){
        int n= nums.size();
        for(int i=0;i<n;i++){
            int ls=0;
            int rs=0;
            for(int j=0;j<i;j++){
                ls+=nums[j];
            }
            for(int j=i+1;j<n;j++){
                rs += nums[j];
            }
            if(ls==rs){
                return i;
            }
        }
        // if()
        return -1;
    }

    int prefixsum(vector<int>& nums){
        int n= nums.size();
        vector<int>ls(nums.size(),0);
        vector<int>rs(nums.size(),0);
        for(int i=1;i<n;i++){
            ls[i]= nums[i-1]+ls[i-1];
        }
        for(int i=n-2;i>=0;i--){
            rs[i]= nums[i+1]+ rs[i+1];
        }
        for(int i=0;i<n;i++){
            if(ls[i]==rs[i]) return i;
        }
        return -1;
    }

    int pivotIndex(vector<int>& nums) {
        return prefixsum(nums);
    }
};