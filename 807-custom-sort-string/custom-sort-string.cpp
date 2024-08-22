string ordercopy;
class Solution {
public:
static bool cmp(char a, char b){
    //ordr wali string m dekho ki a or b kaise placede h
    //true-> a will b b4 b
    //false -> b will b b4 a

    return(ordercopy.find(a)<ordercopy.find(b));
}
    string customSortString(string order, string s) {
        ordercopy=order;
        sort(s.begin(),s.end(),cmp);
        return s;

        
    }
    
};