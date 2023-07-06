class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e-s)/2;
        while(s<e){
            if(nums[mid] > nums[e]){
                s = mid + 1;
            }else if(nums[mid] < nums[e]){
                e = mid;
            }else if(nums[e] == nums[e-1]){
                e--;
            }else{
                s++;
            }mid = s + (e-s)/2;
        }return nums[s];
    }
};
