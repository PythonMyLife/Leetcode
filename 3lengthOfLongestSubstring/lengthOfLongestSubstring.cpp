#define MAX(x,y) (x>y?x:y)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> str_map;
        int begin = 0,max = 0,n = s.size();
        str_map[s[0]] = 0;
        //map<char, int>::iterator iter;
        for(int i = 1; i < n; i++){
            if(str_map.find(s[i]) == str_map.end()){
                str_map[s[i]] = i;
                if (i == s.size() - 1)
                    max = MAX(max,(s.size() - begin));
            }
            else{
                max = MAX(max,(i - begin));
                int tmp = str_map.find(s[i])->second;
                for(;begin <= tmp; begin++){
                    str_map.erase(s[begin]);
                }
                str_map[s[i]] = i;
            }
        }
        if(s.size() == 1) max = 1;
        return max;
    }
};