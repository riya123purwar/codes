class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> ans;set<vector<int>> s;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
        int j=i+1;
        int k= n-1;
        int temp=0;
        while(j<k)
        {
          
                temp= nums[i]+nums[j]+nums[k];
                if(temp == 0){
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(temp>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        for(auto triplet: s){
            ans.push_back(triplet);
        }
        return ans;
    }
};