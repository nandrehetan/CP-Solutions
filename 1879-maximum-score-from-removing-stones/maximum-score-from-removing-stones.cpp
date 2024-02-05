class Solution {
public:
    int maximumScore(int a, int b, int c) {
         int piles[] = {a, b, c};
        std::sort(std::begin(piles), std::end(piles), std::greater<int>());
    int score = 0;
        while (piles[0] > 0 && piles[1] > 0) {
        piles[0]--;
        piles[1]--;
        score++;
        std::sort(std::begin(piles), std::end(piles), std::greater<int>());
    }
    
    return score;
    }
};