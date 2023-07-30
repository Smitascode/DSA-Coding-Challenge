class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        long long rightSum = 0;
        int numMoves = 0;
        while (rightSum < target || (rightSum - target) % 2 != 0) {
            numMoves++;
            rightSum += numMoves;
        }
    
        if (rightSum == target) {
            return numMoves;
        } else if ((rightSum - target) % 2 == 0) {
            return numMoves;
        } else if ((rightSum + numMoves + 1 - target) % 2 == 0) {
            return numMoves + 1;
        } else {
            return numMoves + 2;
        }
    }
};
