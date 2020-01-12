class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        int find;
        for( int i = 0; i < nums.length; i++) {
            find = target - nums[i];
            if(map.containsKey(find)) {
                return new int[]{map.get(find), i};
            }
            map.put(nums[i], i);
        }
        return null;
    }
}