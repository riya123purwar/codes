class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        //truck P:
        int pickP=0;
        int travelP=0;
        int lasthouseP=0;

        //truck G:
        int pickG=0;
        int travelG=0;
        int lasthouseG=0;

        //truck M:
        int pickM=0;
        int travelM=0;
        int lasthouseM=0;

        //let's travel to street of houses
        for(int i=0;i<garbage.size();i++){
            //ith house
            string currhouse = garbage[i];
            //chk currhouse contain which type of garbage
            //string h to iske andr char pade hoyenge
            //lets traverse
            for(int j=0;j<currhouse.length();j++){
                char garbagetype= currhouse[j];
                if(garbagetype == 'P'){
                    pickP++;
                    lasthouseP=i;
                }
                if(garbagetype == 'M'){
                    pickM++;
                    lasthouseM=i;
                }
                if(garbagetype == 'G'){
                    pickG++;
                    lasthouseG=i;
                }
            }

        }
        //lets calculate travel tym for P
        for(int i=0;i<lasthouseP;i++){
            travelP=travelP+travel[i];
        }
        //lets calculate travel tym for M
        for(int i=0;i<lasthouseM;i++){
            travelM=travelM+travel[i];
        }
        //lets calculate travel tym for G
        for(int i=0;i<lasthouseG;i++){
            travelG=travelG+travel[i];
        }
        int totalpickingtym= pickP+pickM+pickG;
        int totaltravellingtym=travelP+travelM+travelG;

        int totaltym= totalpickingtym+totaltravellingtym;
        return totaltym;
    }
};