#include<bits\stdc++.h>
using namespace std;
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        if (weights.empty()) return 0; 
        int inf = 0x3f3f3f3f, lo = 0, hi = accumulate(weights.begin(), weights.end(), 0); 
        while (lo < hi) {
            int capacity = lo + (hi - lo) / 2; 
            int days = 0, cursum = 0;
            for (const int &w : weights) {
                if (w > capacity) { days = inf; lo = w; break; } 
                cursum += w; 
                if (cursum > capacity) { 
                    ++days; 
                    cursum = w; 
                }
            }
            if (days == inf) continue;
            ++days; 
            if (days <= D) hi = capacity;
            else lo = capacity + 1;
        }
        return lo;
    }
};
