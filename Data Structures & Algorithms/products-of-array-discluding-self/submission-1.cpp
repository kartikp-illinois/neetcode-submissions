class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //brute force - o(n^2)
        //else, use division operator every turn
        //divide by 0?
        //first pass - create total mult, use division each output array;
        //w/o division op -> create array w 

        //pre and post?
        int n = nums.size();
        vector<int> prefix(n);
        int val = 1;
        for (int i = 0; i < n; i++) {
            prefix[i] = val * nums[i];
            val = prefix[i];
        }

        val = 1;
        vector<int> suffix(n);
        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = val * nums[i];
            val = suffix[i];
        }

        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int pre = (i > 0) ? prefix[i - 1] : 1;
            int suf = (i < n - 1) ? suffix[i + 1] : 1;
            ans[i] = pre * suf;
        }
        return ans;
    }
};
