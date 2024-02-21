
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        double left = 0.0, right = 1.0;
        vector<int> result(2);

        while (left < right) {
            double mid = left + (right - left) / 2;
            int count = 0;
            double maxFraction = 0.0;

            for (int i = 0, j = 1; i < n - 1; ++i) {
                while (j < n && arr[i] >= mid * arr[j]) ++j;
                count += n - j;
                if (j < n) {
                    double fraction = static_cast<double>(arr[i]) / arr[j];
                    if (fraction > maxFraction) {
                        maxFraction = fraction;
                        result[0] = arr[i];
                        result[1] = arr[j];
                    }
                }
            }

            if (count == k)
                break;
            else if (count < k)
                left = mid;
            else
                right = mid;
        }

        return result;
    }
};
