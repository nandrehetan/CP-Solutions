
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        std::vector<int> countN = countDigits(n);        
        for (int i = 0; i < 31; ++i) {
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