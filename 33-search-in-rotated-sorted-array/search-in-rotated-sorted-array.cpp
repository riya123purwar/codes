class Solution {
public:

int getpivot(vector<int>& nums){
    int s=0;
    int e= nums.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(s==e){
        return s;
    }
        if(mid+1 < nums.size() && nums[mid]>nums[mid+1]){
            return mid;
        }
        if(mid-1>0 && nums[mid]<nums[mid-1]){
            return mid-1;
        }
        //kaha jana h
        if(nums[s]>nums[mid]){
            e= mid-1;
        }
        else{
            s= mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int srch(int s, int e, int target ,vector<int>& nums){
    int mid = s+(e-s)/2;
    while(s<=e){
        if(target == nums[mid]){
            return mid;
        }
        else if( target > nums[mid]){
            s= mid+1;
        }
        else{
            e= mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

    int search(vector<int>& nums, int target) {
        int pivot = getpivot(nums);
        //mujhe target nikaalna h
        //to tzrget ya to A line m aayega ya to B line m aayegaa
        //A line:- nums[0]-> nums[pivot];
        //B line :- nums[pivot+1]-> nums[n-1];
        int n= nums.size();
        //srching for target in line A:
        if(target>=nums[0] && target<=nums[pivot]){
            //A line m exist krta h
            //BS apply
            int ans= srch(0,pivot,target,nums);
            return ans;
        }
        else{
            //B line m exist krta h 
            //BS apply
            int ans= srch(pivot+1,n-1,target,nums);
            return ans;
        }
        return -1;
    }
};