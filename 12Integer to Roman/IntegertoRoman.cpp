class Solution {
public:
    string intToRoman(int num) {
        string num_str;
        int x;
        while(num >= 1000){
            num_str += 'M';
            num -= 1000;
        }
        while(num >= 100){
            if(num >= 900){
                num_str += "CM";
                num -= 900;
            }else if(num >= 500){
                num_str += 'D';
                num -= 500;
            }else if(num >= 400){
                num_str += "CD";
                num -= 400;
            }else {
                x = num / 100;
                num = num % 100;
                num_str.append(x,'C');
            }
        }
        while(num >= 10){
            if(num >= 90){
                num_str += "XC";
                num -= 90;
            }else if(num >= 50){
                num_str += 'L';
                num -= 50;
            }else if(num >= 40){
                num_str += "XL";
                num -= 40;
            }else{
                x = num / 10;
                num = num % 10;
                num_str.append(x, 'X');
            }
        }
        if(num == 9){
            num_str += "IX";
            num -= 9;
        }else if(num >= 5){
            num_str += 'V';
            num -= 5;
        }
        if(num == 4){
                num_str += "IV";
                num -= 4;
        }else{
            x = num;
            num = 0;
            num_str.append(x, 'I');
        }
        return num_str;
    }
};