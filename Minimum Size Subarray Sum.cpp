class Solution {
public:
bool windowfind(int size, vector<int>&nums, int target) {
        int sum = 0;
        int i=0;
        int j=0;
        int mx=INT_MIN;
        int n=nums.size();
        while(j<n){
            sum+=nums[j];
            if(j-i+1==size){
              mx=max(sum,mx);
              sum-=nums[i];
              i++;
            }
            j++;
        }
        if(mx>=target)
        return true;
        return false;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 1, high = nums.size(), mn = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (windowfind(mid, nums, target)) {
                high = mid-1;
                mn = mid;
            } else low = mid + 1;
        }
        return mn;
    }
};
