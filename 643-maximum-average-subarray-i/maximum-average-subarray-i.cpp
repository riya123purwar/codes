class Solution {
public:

int max(int a, int b){
    if(a>b)
    return a;
    else 
    return b;
}

    double good(vector<int>& nums, int &k){
        int i=0;
        int j= k-1;
        int sum=0;
        for(int y=0;y<=j;y++)
            sum += nums[y];
        int maxs= sum;
        j++;
        while(j<nums.size()){
            sum = sum - nums[i++];
            sum = sum + nums[j++];
            maxs = max(maxs,sum);
        }
        double maxavg = maxs/double(k);
        return maxavg;
        
    }

    double findMaxAverage(vector<int>& nums, int k) {
        return good(nums,k);
    }
};