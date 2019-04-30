#include <map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> sum_map;
        vector<int> a(2);
        for(int i = 0,one_num = 0; i < nums.size(); i++){
            one_num = nums[i];
            map<int,int>::iterator iter;
            if(((iter = sum_map.find(target - one_num)) != sum_map.end())){
                a[0] = iter->second;
                a[1] = i;
                return a;
            } else{
                sum_map[one_num] = i; 
            }
        }
        return a;
    }
};