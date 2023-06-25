#include <string>

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long vol = static_cast<long long>(length) * static_cast<long long>(width) * static_cast<long long>(height);
        bool cond1 = (vol >= 1e9) || (length >= 1e4 || width >= 1e4 || height >= 1e4);
        bool cond2 = mass >= 100;

        if (cond1 && cond2)
            return "Both";
        else if (cond1)
            return "Bulky";
        else if (cond2)
            return "Heavy";
        else
            return "Neither";
    }
};
