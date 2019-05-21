class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> a;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int i, j, k;
        for(i = 0; i < size; i++){
            j = i + 1;
            k = size - 1;
            int x = nums[i];
            if(i > 0 && x == nums[i-1] )  continue;
            while(j < k){
                if(nums[j] + nums[k] == -x){
                    if(j == i + 1 || k == size -1 || (nums[j] != nums[j-1])&&(nums[k] != nums[k+1])){
                        a.push_back(vector<int>{x, nums[j], nums[k]});
                    }
                    j++;k--;
                }else if(nums[j] + nums[k] < -x){
                    j++;
                }else{
                    k--;
                }
            }
        }
        return a;
    }
};