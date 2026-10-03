class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int count = 1;
        unordered_set<int> ans;
        //second int is index found
        for (int i = 0; i < nums.size(); i++) {
            // if (ans.contains(nums[i] - 1)) {
            //     count++;
            // }
            ans.insert(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            int curCount = 1;
            if (ans.contains(nums[i]-1)) {
                continue;
            }
            while (ans.contains(nums[i] + curCount)) {
                curCount++;
            }
            if (curCount > count) {
                count = curCount;
            }
        }
        return count;
        //hashmap:
        /*

        if nums[i] - 1 is in hashmap, count = count + 1;
        push 


        */
    }
};
