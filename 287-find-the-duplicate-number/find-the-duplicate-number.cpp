class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]== nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return -1;

        //visited wala case lia h
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int index= abs(nums[i]);
            if(nums[index]<1){
                ans=index;
                break;
            }
            else{
                nums[index] *= -1;
            }
        }
        return ans;
    }
};