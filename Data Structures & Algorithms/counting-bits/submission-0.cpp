class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output = {};
        for (int i = 0; i <= n; i++) {
            int result = 0;
            int temp = i;
            while (temp != 0) {
                result += (temp & 1);
                temp = temp >> 1;
            }
            output.push_back(result);
        }

        return output;
    }
};
