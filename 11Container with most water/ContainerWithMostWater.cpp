#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)>(y)?(y):(x))
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0,i = 0,j = height.size() - 1;
        while(i < j){
            max = MAX(max,MIN(height[i],height[j])*(j - i));
            if(height[i] < height[j]) i++;
            else j--;
        }
        return max;
    }
};