// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;
        int ans;
        while(s <= e){
            if(isBadVersion(mid))
                ans = mid, e = mid - 1;
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }return ans;
    }
};
