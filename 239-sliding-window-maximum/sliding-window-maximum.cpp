class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        int n= nums.size();
        //step 1 process the first window and print ans
        for(int i=0;i<k;i++){
            int elemnt= nums[i];
            //isko to push krna hi h
            
            while(!dq.empty() && nums[dq.back()]< elemnt){
                dq.pop_back();
            }
            //current elemnt to insert krdo
            dq.push_back(i);
        }
        // get ans for thr first window
        int index= dq.front();
        int elemnt = nums[index];
        ans.push_back(elemnt);

        // processing for remainig window
        for(int i=k;i<n;i++){
            //remove
            if(!dq.empty() &&   i-dq.front()>=k){
                dq.pop_front();
            }
            //addition
            int elemnt= nums[i];
            
            while(!dq.empty() && nums[dq.back()]< elemnt){
                dq.pop_back();
            }
            //current elemnt to insert krdo
            dq.push_back(i);
            // ans 
            int index= dq.front();
            int aelemnt = nums[index];
            ans.push_back(aelemnt);
        }
        return ans;
    }
};