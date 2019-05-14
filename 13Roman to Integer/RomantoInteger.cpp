class Solution {
public:
    int romanToInt(string s) {
        int i = 0, result = 0, size = s.size();
        while(i < size){
            switch(s[i]){
                case 'M':
                    result += 1000;
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'C':
                    if(i + 1 < size){
                        if(s[i + 1] == 'M'){
                            result += 900;
                            i++;
                            break;
                        }else if(s[i + 1] == 'D'){
                            result += 400;
                            i++;
                            break;
                        }
                    }
                    result += 100;
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'X':
                    if(i + 1 < size){
                        if(s[i + 1] == 'C'){
                            result += 90;
                            i++;
                            break;
                        }else if(s[i + 1] == 'L'){
                            result += 40;
                            i++;
                            break;
                        }
                    }
                    result += 10;
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'I':
                    if(i + 1 < size){
                        if(s[i + 1] == 'X'){
                            result += 9;
                            i++;
                            break;
                        }else if(s[i + 1] == 'V'){
                            result += 4;
                            i++;
                            break;
                        }
                    }
                    result += 1;
                    break;
                default:
                    i++;
                    break;
            }
            i++;
        }
        return result;
    }
};