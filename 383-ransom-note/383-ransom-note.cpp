class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int> map;
        for(int i = 0; i<m.size();i++){
            map[m[i]]++;
        }
        
        for(int i = 0;i<r.size();i++){
            if(map[r[i]]>0){
                map[r[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};