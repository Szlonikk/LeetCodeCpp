class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()>t.length()){
            return false;
        
        }if(s.length()==t.length() && s!=t){
            return false;
        }
    
        size_t pos = -1;
        for(int i=0;i<s.length();i++){
            pos= t.find(s[i],pos+1);
            if(pos==std::string::npos){
                return false;
            }
        }
        return true;

    }
};