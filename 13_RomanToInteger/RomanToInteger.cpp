
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> values = {
            {'M',1000}, {'D',500},
            {'C',100}, {'L',50},
            {'X',10}, {'V',5}, {'I',1}
        };

        int result=0;
        int i=0;
        while(i<s.length()){
            if(i<s.length()-1 && values[s[i]]<values[s[i+1]]){
                result+=values[s[i+1]]-values[s[i]];
                i+=2;
            }
            else{
                result+=values[s[i]];
                i+=1;
            }
        }
        return result;
        
    }
};