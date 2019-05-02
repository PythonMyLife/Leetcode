#define ABSOLUTE(x) ((x)>0?(x):(-x))
#define SYMBOL(x) ((x)>0?1:0)
#define GETX(x,symbol) ((symbol)?(x):(-x))
class Solution {
public:
    int reverse(int x) {
        if(x == -2147483648) return 0;
        int symbol = SYMBOL(x),ab_x = ABSOLUTE(x),result = 0;
        string a,b;
        unsigned int max = (unsigned int)(1 << 31) - symbol; 
        a = to_string(ab_x);
        b = to_string(max);
        int a_size = a.size(),b_size = b.size();
        //if(a_size > b_size) return 0;
        bool flag = (a_size < b_size);
        for(int i = a_size - 1; i >= 0; i--){
            if(flag) result = result * 10 + (a[i] -'0');
            else if(a[i] > b[b_size-i-1]) return 0;
            else if(a[i] == b[b_size-i-1]) result = result * 10 + (a[i] - '0');
            else{
                flag = true;
                result = result * 10 + (a[i] - '0');
            }
        }
        return GETX(result,symbol);
    }
};