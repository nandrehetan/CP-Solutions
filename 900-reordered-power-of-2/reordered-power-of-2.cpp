
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        // Count the digits of n
        std::vector<int> countN = countDigits(n);
        
        // Check all powers of 2 with the same number of digits as n
        for (int i = 0; i < 31; ++i) {  // There are at most 31 powers of 2 with 32-bit integer
            if (countDigits(1 << i) == countN) {
                return true;
            }
        }
        
        return false;
    }
    
private:
    std::vector<int> countDigits(int num) {
        std::vector<int> count(10, 0);
        while (num > 0) {
            count[num % 10]++;
            num /= 10;
        }
        return count;
    }
};