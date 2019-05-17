class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        if(size == 0) return "";
        if(size == 1) return strs[0];
        string a = strs[0];
        for(int i = 1;i < size;i++){
            string tmp = "";
            for(int j = 0; j < a.size(); j++){
                if(a[j] == strs[i][j]){
                    tmp += a[j];
                }else{
                    break;
                }
            }
            a = tmp;
            if(a == "") break;
        }
        return a;
    }
};