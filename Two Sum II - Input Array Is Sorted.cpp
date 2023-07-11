class Solution {
public:
int search(int target,vector<int>&nums,int left,int right)
    {
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]>target)
                right=mid-1;
            else if(nums[mid]<target)
                left=mid+1;
            else
                return mid;
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++)
        {
            int j=search(target-numbers[i],numbers,i+1,numbers.size()-1);
            if(j!=(-1))
                return {i+1,j+1};
        }
        return {-1,-1};
    }
};
