class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left = 0, right = 0, n=nums.size();
        for(int i = 0;i<n;++i){
            left=max(left,nums[i]);
            right+=nums[i];
        }
        int mid = 0, ans = 0;
        while(left<=right){
            mid = (left+right)/2;
            int count = 0;
            int sum = 0;
            for(int i = 0;i<n;++i){
                if(sum+nums[i]<=mid){
                    sum += nums[i];
                }else{
                    count++;
                    sum = nums[i];
                }
            }count++;
            if(count<=k){
                right = mid-1;
                ans = mid;
            }else{
                left = mid+1;
            }
        }return ans;
    }
};
