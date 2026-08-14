class Solution {
public:
    int reverseBits(int n) {
        int result = 0;
        for (int i = 0; i < 32; i++) {
            // Extract the rightmost bit of n
        int bit = (n >> i) & 1;
            // Shift it left to its reversed position and OR it with result
            result |= (bit << (31 - i));
        }
        return result;
    }
};