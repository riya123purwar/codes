class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //basic case
        if(n==0)//flr lagane hi nhi h
        return true;

        int l= flowerbed.size();
        
            for(int i=0;i<l;i++){
                if(flowerbed[i] == 0){
                    bool leftkhali = (i==0)||flowerbed[i-1]==0;
                    bool rytkhali =  (i == (l-1))||flowerbed[i+1]==0;
        if(leftkhali && rytkhali) {
            flowerbed[i] = 1;
            n--;

            if (n==0) 
            return true;
        }
        }
        }
        return false;
        }
       
};