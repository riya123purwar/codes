class Solution {
public:

void merge(vector<int>& a,int s, int e){
    int mid=(s+e)/2;
    int tot_len= e-s+1;
    int gap = (tot_len/2) + (tot_len%2);
    while(gap>0){
        int i=s;
        int j = s+gap;
        while(j<= e){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
            i++,j++;
        }
        gap= gap<=1? 0: (gap/2)+(gap%2);
    }
    // int i=s;
    // int j= mid+1;
    // int k= 0;
    // vector<int>temp;
    // while(i<= mid && j<= e){
    //     if(a[i]<=a[j]){
    //         temp.push_back(a[i]);
    //         i++;
    //     }
    //     else{
    //         temp.push_back(a[j]);
    //         j++;
    //     }
    // }
    // while(i<=mid){
    //    temp.push_back(a[i]); 
    //    i++;
    // }
    // while(j<= e){
    //     temp.push_back(a[j]);
    //     j++;
    // }
    // for(k=0;k<temp.size();k++){
    //     a[s+k]= temp[k];
    // }
}

void mergesort(vector<int>& a,int s, int e){
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);
    merge(a,s,e);
}

    vector<int> sortArray(vector<int>& nums) {
        int n= nums.size();
        mergesort(nums, 0, n-1);
        return nums;
    }
};