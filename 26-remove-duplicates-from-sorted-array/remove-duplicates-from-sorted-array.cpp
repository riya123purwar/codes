class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;int j=0;
        while(i<nums.size()){
            if(nums[j]== nums[i])//duplicacy found
            i++;
            else
            nums[++j]= nums[i++];
            // else{
            //     // j++;
            //     // nums[j]= nums[i];
            //     // i++;
            // }
        }
        return j+1;
    }
};