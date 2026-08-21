class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int k = low + (high - low) / 2;

            long long time = 0;

            for (int pile : piles) {
                time += (pile + k - 1) / k;
            }

            if (time <= h) {
                high = k;       // k works, try smaller
            } else {
                low = k + 1;    // k is too slow
            }
        }

        return low;
    }
};
