class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int s= 0;
        int e= n-1;
        
        while(s<=e){
            int mid= (s+e)/2;
            if(nums[mid] == target)
            //agr hume target mill gya to hmne index return kia
            return mid;
            //hume right m jana h 
            else if(target > nums[mid]){
                 s= mid+1;
            }
           //left m jana h
            else
            {
                e= mid-1;
            }
            //bhool jaati hu
            // mid = (s+e)/2;
        }
        //use kuch nhi mila mtlb use target nhi. mila
        return -1;
    }
};