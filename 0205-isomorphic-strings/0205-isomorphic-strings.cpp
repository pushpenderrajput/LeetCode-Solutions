class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, char> map_s_to_t;
        unordered_map<char, char> map_t_to_s;

        for(size_t i = 0;i<s.length();i++){
            char original = s[i];
            char replace = t[i];
            if(map_s_to_t.find(original) != map_s_to_t.end()){
                if(map_s_to_t[original] != replace){
                    return false;
                    
                }
            }
            else{
                    map_s_to_t[original] = replace;
                }    
            if(map_t_to_s.find(replace) != map_t_to_s.end()){
                    if(map_t_to_s[replace] != original){
                        return false;
                    }
            }
            else{
                        map_t_to_s[replace] = original;
                    }    
                    
                }
                return true;
        
        
        
        
    }
};