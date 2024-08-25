class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e= n-1;
        int mid= s+(e-s)/2;
        int ansin=-1;
        sort(nums.begin(), nums.end());

        while(s<=e){
            int diff= nums[mid]- mid;
            if(diff==0){
                //ryt
                s=mid+1;
            }
            else if(diff==1){
                //shyd ans ho skta or nhi bhi
                //store krwa dia
                ansin= mid;
                e=mid-1;
            }
            mid= s+(e-s)/2;
        }
        if(ansin == -1){
            return n;
        }
        return ansin;


    }
};