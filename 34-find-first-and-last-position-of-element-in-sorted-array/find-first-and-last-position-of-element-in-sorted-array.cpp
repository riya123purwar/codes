class Solution {
public:

void first(vector<int>& nums, int n, int target, int &firstindex){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid= s+(e-s)/2;
        if(nums[mid]== target){
            //is it first?? chk it 
            // store and compute
            firstindex= mid;
            e=mid-1;
        }
        else if(target> nums[mid]){
            s= mid+1;
        }
        else{
            e=mid-1;
        }
    }
}


void last(vector<int>& nums, int n, int target, int &firstindex){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid= s+(e-s)/2;
        if(nums[mid]== target){
            //is it last?? chk it 
            // store and compute
            firstindex= mid;
            s=mid+1;
        }
        else if(target> nums[mid]){
            s= mid+1;
        }
        else{
            e=mid-1;
        }
    }
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int firstindex= -1;
        int lastindex=-1;
        first(nums,n,target,firstindex);
        last(nums,n,target,lastindex);
        vector<int>ans(2);
        ans[0]=firstindex;
        ans[1]= lastindex;
        return ans;

    }
};