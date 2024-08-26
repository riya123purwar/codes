class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i=0;
        int n= nums.size();
        int j=1;
        int c=0;
        set<pair<int,int>>final;
        while(j<n){
            int diff= nums[j]-nums[i];
        if(diff == k){
            final.insert({nums[i],nums[j]});
            ++i;
           
            ++j;
        }
        else if(diff>k){
            i++;
        }
        else{
            j++;
        }
        if(i==j)j++;
        }
        return final.size();
    }
    
};