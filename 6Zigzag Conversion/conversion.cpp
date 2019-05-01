class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int len = s.size();
        if(numRows >= len) return s;
        vector<string> strRows(numRows);
        bool flag = false;
        int j = -1;
        for(int i = 0; i < len; i++){
            if(!flag){
                j++;
                strRows[j] += s[i];
                if(j == numRows-1) flag = !flag;
            }else{
                j--;
                strRows[j] += s[i];
                if(j == 0) flag = !flag;
            }
        }
        string result;
        for(string row : strRows){
            result += row;
        }
        return result;
    }
};