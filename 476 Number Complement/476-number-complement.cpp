class Solution {
public:
    int findComplement(int num) {

        int notn = ~num, mask = 0;
        if (num == 0) {
            return 1;
        }
        while (num != 0) {
            mask = mask << 1 | 1;
            num = num >> 1;
        }
        return notn & mask;
    }
};