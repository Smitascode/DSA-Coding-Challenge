class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        vector<int> ans(queries.size());
        sort(nums.begin(),nums.end());
        for(int i = 1;i<n;i++){
            nums[i]=nums[i]+nums[i-1];
        }
        for(int i = 0;i<queries.size();i++){
            int s = 0;int end = n-1;
            int mid = s+(end-s)/2;
            while(s<=end){
                if(nums[mid]==queries[i]){
                    ans[i]=mid+1;
                    break;
                }
                else if(nums[mid]<queries[i]){
                    ans[i]=mid+1;
                    s = mid+1;
                }
                else{
                    end = mid-1;
                }
                mid = s+(end-s)/2;
            }
        
        }return ans;
    }
};
