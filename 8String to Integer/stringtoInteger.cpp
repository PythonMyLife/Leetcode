class Solution {
public:
    int myAtoi(string str) {
        int i = 0,j = 0,result = 0,symbol = 0;
        string max = to_string(INT_MAX);
        string min = to_string((unsigned int)INT_MAX + 1);
        while((i < str.size())&&(str[i] ==' ')){
            i++;
        }
        if(i == str.size() || !((str[i] >='0' && str[i] <= '9') || str[i]=='-' ||str[i]=='+')) return 0;
        if(str[i] == '-'){
            symbol = 1;
            i++;
        }
        else if(str[i] == '+'){
            symbol = 0;
            i++;
        }
        string sym = symbol?min:max;
        int sym_int = symbol?INT_MIN:INT_MAX;
        while(str[i]=='0'){i++;}
        int tmp = i;
        for(j = i;i < str.size();i++){
            if(!('0' <= str[i] && str[i] <= '9')) break;
            j++;
        }
        cout << "tmp:" << tmp <<"j:" << j <<"sym.size:"<< sym.size()<< endl;
        cout << "sym_int:" << sym_int;
        //j += symbol;
        if(j - tmp > sym.size()) return sym_int;
        if(j - tmp == sym.size()){
            bool flag = false;
            if(!symbol){
                for(i = tmp;i <= j-1;i++){
                    if(flag) result = result * 10 +(str[i] - '0');
                    else{
                        if(str[i] > sym[i - tmp]) return sym_int;
                        else if(str[i] == sym[i - tmp]){
                            result = result * 10 +(str[i] - '0');
                            cout << str[i];
                        }else{
                            result = result * 10 +(str[i] - '0');
                            flag = true;
                        }
                    }
                }
            }else{
                for(i = tmp;i <= j-1;i++){
                    if(flag) result = result * 10 -(str[i] - '0');
                    else{
                        if(str[i] > sym[i - tmp]) return sym_int;
                        else if(str[i] == sym[i - tmp]){
                            result = result * 10 -(str[i] - '0');
                            cout << str[i];
                        }else{
                            result = result * 10 -(str[i] - '0');
                            flag = true;
                        }
                    }
                }
            }
        }else{
            for(i = tmp;i <= j-1; i++){
                result = result * 10 +(str[i] - '0');
            }
            result = symbol?(-result):result;
        }
        return result;
    }
};