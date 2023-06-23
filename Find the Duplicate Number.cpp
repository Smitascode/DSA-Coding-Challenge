class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>sub(n+1,0);
        for(int i=0;i<n;i++){
            sub[nums[i]]++;
        }
        int ans=-1;
        for(int i=1;i<=n;i++){
            if(sub[i]>1){
                ans=i;
            }
        }
        return ans;
    }
};
