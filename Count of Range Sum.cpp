class Solution {
public:
int countRangeSum(vector<long long>& sum, int lower, int upper, int left, int right) {
    if (left == right) {
        return 0;
    }

    int mid = (left + right) / 2;
    int count = countRangeSum(sum, lower, upper, left, mid) + countRangeSum(sum, lower, upper, mid + 1, right);

    int i = left;
    int j1 = mid + 1;
    int j2 = mid + 1;

    // Count the valid ranges
    for (i = left; i <= mid; i++) {
        while (j1 <= right && sum[j1] - sum[i] < lower) j1++;
        while (j2 <= right && sum[j2] - sum[i] <= upper) j2++;
        count += (j2 - j1);
    }

    // Merge the sorted segments
    vector<long long> sorted(right - left + 1);
    int l = left, r = mid + 1, k = 0;
    while (l <= mid && r <= right) {
        if (sum[l] <= sum[r]) {
            sorted[k++] = sum[l++];
        } else {
            sorted[k++] = sum[r++];
        }
    }
    while (l <= mid) sorted[k++] = sum[l++];
    while (r <= right) sorted[k++] = sum[r++];

    for (int p = 0; p < sorted.size(); p++) {
        sum[left + p] = sorted[p];
    }

    return count;
}

    int countRangeSum(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        vector<long long> sum(n + 1, 0);

    // Calculate the prefix sum
        for (int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + nums[i];
        }

    return countRangeSum(sum, lower, upper, 0, n);
    }
};
