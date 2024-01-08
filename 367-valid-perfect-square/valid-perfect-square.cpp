class Solution {
public:
    bool isPerfectSquare(int num) {
        int ok = sqrt(num);
        if(ok*ok == num) return true;
        else return false;
    }
};