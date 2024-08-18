class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n= nums.size();
        // vector<int> ans;
        // for(int i=0;i<n;i++){
        //     for (int j=i+1;j<n;j++){
        //         if(nums[i]+ nums[j]==target)
        //         {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;
        //         }
        //     }
        // }
        // return ans;
        int n= nums.size();
        vector<pair<int,int>>pair;
        for(int i=0;i<n;i++){
            pair.push_back({nums[i], i});
        }
        //sbse pehle arrange krte h ascending ordr m
        sort(pair.begin(), pair.end());
        int low=0;
        int hy=n-1;
        while(low<hy){
            int csum= pair[low].first+ pair[hy].first;
            if(csum == target){
                // cout<<low<<hy;
                return {pair[low].second, pair[hy].second};
            }
            else if(csum >target){
                hy --;
            }
            else{
                low++;
            }
        }
       return {};
    }
};