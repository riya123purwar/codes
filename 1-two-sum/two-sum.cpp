class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<pair<int,int>>pair;
        // vector<int>csum;
        //pushing values in pair
        for(int i=0;i<n;i++){
            pair.push_back({nums[i],i});
        }
        //arranging in ascending ordr
        sort(pair.begin(), pair.end());
        //2ptr approach
        int l=0;
        int h=n-1;
        while(l<h){
            int csum = pair[l].first+pair[h].first;
            if(csum==target){
                return {pair[l].second,pair[h].second};
            }
            else if(csum>target){
                h--;
            }
            else{
                l++;
            }
        }
        return{};

    }
};