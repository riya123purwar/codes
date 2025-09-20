class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.begin()+n);
        // int zc=0;
        // int oc=0;
        // int tc=0;
        // for(int i =0;i<n;i++){
        //     if (arr[i]==0) zc++;
        //     if(arr[i]==1) oc++;
        //     if(arr[i]==2) tc++;

        // }
        // fill(arr.begin(), arr.begin() + zc, 0);
        // fill(arr.begin()+zc, arr.begin()+zc+oc,1);
        // fill(arr.begin()+oc+zc, arr.begin()+n,2);
        // for(int i=0;i<zc;i++){
        //     arr[i]=0;
        // }
        // for(int i=zc;i<zc+oc;i++){
        //     arr[i]=1;
        // }
        // for(int i=zc+oc;i<n;i++){
        //     arr[i]=2;
        // }
    }
};