class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int ans = INT_MAX;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[start]<=nums[end]){
                ans = min(ans,nums[start]);
                break;
            }
            if(nums[start]<=nums[mid]){
                ans = min(ans,nums[start]);
                start = mid+1;
            }else{
                end = mid-1;
                ans = min(ans,nums[mid]);
            }
        }return ans;
    }
};
