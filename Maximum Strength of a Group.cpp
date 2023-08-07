class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        long long int ans = 1;
        int mx = INT_MIN;
        bool a = false, b = false;
        int c = 0;
        for(auto &i: nums){
            if(i>0)a = true;
            if(i==0)b = true;
            if(i<0)c++;
            if(i)
            ans *= i;
            if(i<0)mx = max(mx,i);
        }
        if(c==0){
            if(a)return ans;
            return 0;
        }else if(c==1){
            if(a)return ans/mx;
            return 0;
        }
        if((c||a) && ans>0){
            return ans;
        }
        ans /= mx;
        return ans;
    }
};
