class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<nums.size();i++){
            int elements= nums[i];
            
            if(elements>=1 && elements<n){
                int position= elements-1;
            if(nums[position]!=elements){
                swap(nums[position],nums[i]);
                i--;

            }
            }
        }
        for(int i=0;i<nums.size();i++){
            if((i+1)!=nums[i])
            return i+1;
        }
        return n+1;
    }
};
