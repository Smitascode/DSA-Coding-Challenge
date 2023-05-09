class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     int n1 = nums1.size(), n2 = nums2.size();
        if (n1 > n2) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int left = 0, right = n1;
        while (left <= right) {
            int mid1 = (left + right) / 2;
            int mid2 = (n1 + n2 + 1) / 2 - mid1;
            int maxLeft1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
            int minRight1 = (mid1 == n1) ? INT_MAX : nums1[mid1];
            int maxLeft2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
            int minRight2 = (mid2 == n2) ? INT_MAX : nums2[mid2];
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                if ((n1 + n2) % 2 == 0) {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                } else {
                    return max(maxLeft1, maxLeft2);
                }
            } else if (maxLeft1 > minRight2) {
                right = mid1 - 1;
            } else {
                left = mid1 + 1;
            }
        }
        return 0.0;
    }
};
