class Solution {
public:
    string decodeMessage(string key, string message) {
        //step1: create the mapping
        //fr mapping v r creating unoredered map as it have TC of O(1)
        unordered_map<char, char> mapping;
        char space =' ';
        mapping[space]= space;
        int index=0;
        char start ='a';
        while(start <= 'z'&& index < key.length()){
            char keykacurrchar= key[index];
            //
            if(mapping.find(keykacurrchar)!= mapping.end()){
                //char is already present
                index++;
            }
            else{
                //char is not present v hv to assign this to mapping
                mapping[keykacurrchar]=start;
                start++;
                index++;
            }
        }
        string ans="";
        //step2: decode the message thru mappping
        for(int i=0;i<message.length();i++){
            char messkachar = message[i];
            char mappedchar = mapping[messkachar];
            ans.push_back(mappedchar);
        }
        return ans;
    }
};