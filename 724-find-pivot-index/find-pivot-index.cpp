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

    int pivotIndex(vector<int>& nums) {
        return bruteforce(nums);
    }
};