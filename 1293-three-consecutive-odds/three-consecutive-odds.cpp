// class Solution {
// public:
//     bool threeConsecutiveOdds(vector<int>& arr) {
//         for(int i = 0; i < arr.size() - 2; i++) { // ensure i+2 is within bounds
//             if(arr[i] % 2 != 0 && arr[i+1] % 2 != 0 && arr[i+2] % 2 != 0) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if (arr.size() < 3) return false; // handle small vectors
        for(int i = 0; i < arr.size() - 2; i++) { // ensure i+2 is within bounds
            if(arr[i] % 2 != 0 && arr[i+1] % 2 != 0 && arr[i+2] % 2 != 0) {
                return true;
            }
        }
        return false;
    }
};
