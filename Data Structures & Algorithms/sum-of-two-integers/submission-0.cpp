class Solution {
public:
    int getSum(int a, int b) {
        int carry = 0;
        int sum = 0;
        for (int i = 0; i < 32; i++) {
            int a_bit = (a >> i) & 1;
            int b_bit = (b >> i) & 1;
            int add = a_bit ^ b_bit;
            int sum_bit = add ^ carry;
            sum |= (sum_bit << i);
            carry = (a_bit & b_bit) | (carry & add);
        }
        return sum;
    }
};
