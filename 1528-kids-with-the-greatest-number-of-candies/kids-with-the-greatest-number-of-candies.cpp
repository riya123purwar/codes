class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int l= candies.size();
        int maxi=*max_element(candies.begin(), candies.end());
        vector<bool>result(l);
        // for(int i=0;i<l;i++){
        //     maxi= max(maxi,candies[i]);
        //     }
            for(int i=0;i<l;i++){
            if(candies[i]+ extraCandies < maxi){
                result[i]= false;
            }
            else{
                result[i]= true;
            }
        }
        return result;
    }
};