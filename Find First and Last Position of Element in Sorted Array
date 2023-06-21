class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      
    int left = 0;
    int right = nums.size() - 1;
    int start = -1;
    int end = -1;
    
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] >= target) {
            right = mid - 1;
            if (nums[mid] == target)
                start = mid;
        } else {
            left = mid + 1;
        }
    }
    
    if (start == -1)
        return {-1, -1};
    
    left = start;
    right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= target) {
            left = mid + 1;
            if (nums[mid] == target)
                end = mid;
        } else {
            right = mid - 1;
        }
    }
    
    return {start, end};
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5};
    int target = 4;
    
    vector<int> result = searchRange(nums, target);
    cout << "Starting position: " << result[0] << ", Ending position: " << result[1] << endl;
    
    return 0;
}

    
};
