class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        int i=0;
        int j=0;
        int ans=-1;
        while(i<a&&j<b)
        {
            if(nums1[i]>nums2[j])
                j++;
            else if(nums2[j]>nums1[i])
                i++;
            else
            {
                ans=nums1[i];
                break;
            }
        }
        return ans;
    }
};
